#pragma once

#include "AsyncTool.h"

#include "Async/Async.h"

TFuture<void> FAsyncTool::RunLambdaOnBackGroundThread(TFunction<void()> InFunction)
{
	return Async(EAsyncExecution::Thread, InFunction);
}

TFuture<void> FAsyncTool::RunLambdaOnBackGroundThreadPool(TFunction<void()> InFunction)
{
	return Async(EAsyncExecution::ThreadPool, InFunction);
}

FGraphEventRef FAsyncTool::RunShortLambdaOnGameThread(TFunction<void()> InFunction)
{
	return FFunctionGraphTask::CreateAndDispatchWhenReady(InFunction, TStatId(), nullptr, ENamedThreads::GameThread);
}