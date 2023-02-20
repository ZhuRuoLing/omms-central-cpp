//
// Created by jkl-9 on 2023/2/20.
//

#ifndef OMMS_CENTRAL_CPP_THREAD_HPP
#define OMMS_CENTRAL_CPP_THREAD_HPP

#include "Object.h"

class Thread : public Object {
private:
    const std::string name;
    std::thread thread;
    virtual void run(){};
public:
    explicit Thread(const std::string &n) : name(n), Object(n) {}

    Thread(const Thread &thread1) = delete;

    ~Thread() override = default;
public:
    void start() {
        thread = std::thread([this] {
            this->run();
        });
        //thread.detach();
    }

    void join() {
        logDebug(std::to_string(thread.joinable()));
        thread.join();
    }

    void interrupt(){

    }

};

#endif //OMMS_CENTRAL_CPP_THREAD_HPP
