//
// Created by jkl-9 on 2023/2/20.
//

#ifndef OMMS_CENTRAL_CPP_THREAD_HPP
#define OMMS_CENTRAL_CPP_THREAD_HPP

#include "Object.h"

class Thread : public Object {
private:
    std::string name;
    std::thread thread;
public:
    Thread(const std::string &n) : name(n), Object(n) {}

    Thread(Thread const &thread1) = delete;

    ~Thread() override = default;

    virtual void run() const {}

    void start() {
        thread = std::thread([this] {
            this->run();
        });
        thread.detach();
    }

    void join() {
        return thread.join();
    }

};

#endif //OMMS_CENTRAL_CPP_THREAD_HPP
