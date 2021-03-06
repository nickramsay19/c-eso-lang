#ifndef EXECUTOR_H
#define EXECUTOR_H

#include "Parser.h"
#include "Stack.h"
#include "Runtime.h"

int DelegateExecution(Command c, Runtime runtime);

int ExecuteConditionally(Command c, Runtime runtime);

int Execute(Command c, Runtime runtime);

#endif