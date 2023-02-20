//
// Created by jkl-9 on 2023/2/20.
//

#ifndef OMMS_CENTRAL_CPP_CONSOLETHREAD_H
#define OMMS_CENTRAL_CPP_CONSOLETHREAD_H


#include "../base/Thread.hpp"

class ConsoleThread : public Thread{
public:
    explicit ConsoleThread();
    ~ConsoleThread() override;
private:
    void run() override;

};


#endif //OMMS_CENTRAL_CPP_CONSOLETHREAD_H
