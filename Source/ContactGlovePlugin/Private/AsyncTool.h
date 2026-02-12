#pragma once

class CONTACTGLOVEPLUGIN_API FAsyncTool
{
public:
	/*
	Runs the passed lambda on the background thread, new thread per call
	*/
	static TFuture<void> RunLambdaOnBackGroundThread(TFunction<void()> InFunction);

	/*
	Runs the passed lambda on the background thread pool
	*/
	static TFuture<void> RunLambdaOnBackGroundThreadPool(TFunction<void()> InFunction);

	/*
	Runs a short lambda on the game thread via task graph system
	*/
	static FGraphEventRef RunShortLambdaOnGameThread(TFunction<void()> InFunction);
};