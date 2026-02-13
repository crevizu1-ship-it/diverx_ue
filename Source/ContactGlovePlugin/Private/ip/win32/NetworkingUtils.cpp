/*
	oscpack -- Open Sound Control (OSC) packet manipulation library
    http://www.rossbencina.com/code/oscpack

    Copyright (c) 2004-2013 Ross Bencina <rossb@audiomulch.com>

	Permission is hereby granted, free of charge, to any person obtaining
	a copy of this software and associated documentation files
	(the "Software"), to deal in the Software without restriction,
	including without limitation the rights to use, copy, modify, merge,
	publish, distribute, sublicense, and/or sell copies of the Software,
	and to permit persons to whom the Software is furnished to do so,
	subject to the following conditions:

	The above copyright notice and this permission notice shall be
	included in all copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
	EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
	MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
	IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR
	ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
	CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
	WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

/*
	The text above constitutes the entire oscpack license; however, 
	the oscpack developer(s) also make the following non-binding requests:

	Any person wishing to distribute modifications to the Software is
	requested to send the modifications to the original developer so that
	they can be incorporated into the canonical version. It is also 
	requested that these non-binding requests be included whenever the
	above license is reproduced.
*/
#include "ip/NetworkingUtils.h"

#define WIN32_LEAN_AND_MEAN
#include <winsock2.h>   // this must come first to prevent errors with MSVC7
#include <ws2tcpip.h>
#include <windows.h>

#include <cstring>


static LONG initCount_ = 0;
static bool winsockInitialized_ = false;

NetworkInitializer::NetworkInitializer()
{
    if( InterlockedIncrement( &initCount_ ) == 1 ){
        // there is a race condition here if one thread tries to access
        // the library while another is still initializing it. 
        // i can't think of an easy way to fix it so i'm telling you here
        // incase you need to init the library from two threads at once.
        // this is why the header file advises to instantiate one of these 
        // in main() so that the initialization happens globally

        // initialize winsock
	    WSAData wsaData;
	    int nCode = WSAStartup(MAKEWORD(1, 1), &wsaData);
	    if( nCode != 0 ){
	        //std::cout << "WSAStartup() failed with error code " << nCode << "\n";
        }else{
            winsockInitialized_ = true;
        }
    }
}


NetworkInitializer::~NetworkInitializer()
{
    if( InterlockedDecrement( &initCount_ ) == 0 ){
        if( winsockInitialized_ ){
            WSACleanup();
            winsockInitialized_ = false;
        }
    }
}


unsigned long GetHostByName( const char *name )
{
    NetworkInitializer networkInitializer;

    unsigned long result = 0;

    addrinfo hints = {};
    hints.ai_family = AF_INET;
    hints.ai_socktype = SOCK_DGRAM;

    addrinfo* info = nullptr;
    if( getaddrinfo(name, nullptr, &hints, &info) == 0 && info ){
        const sockaddr_in* ipv4 = reinterpret_cast<const sockaddr_in*>(info->ai_addr);
        result = ntohl(ipv4->sin_addr.s_addr);
        freeaddrinfo(info);
    }

    return result;
}
