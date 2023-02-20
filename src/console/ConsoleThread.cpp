//
// Created by jkl-9 on 2023/2/20.
//

#include "ConsoleThread.h"

ConsoleThread::ConsoleThread() : Thread("ConsoleThread") {}

void ConsoleThread::run() {
    logInfo(std::format("Using ConsoleThread instance: {}", this->toString()));
}

ConsoleThread::~ConsoleThread() = default;
