//
// Created by jkl-9 on 2023/2/18.
//

#ifndef OMMS_CENTRAL_CPP_OBJECT_H
#define OMMS_CENTRAL_CPP_OBJECT_H

#include "format"
#include "string"
#include "../logger/Logger.h"

//base class of all central server class
class Object{
protected:
    std::string name;
    Logger logger;
public:
    explicit Object(std::string name);

    virtual ~Object() = default;

    virtual std::string toString() {
        auto addrOfThis = reinterpret_cast<uint64_t>(this);
        return std::format("<object {} at 0x{:0>16X}>", name, addrOfThis);
    }

    virtual bool equals() { return true; }

    void logError(const std::string &s) const;

    void logInfo(const std::string &s) const;

    void logDebug(const std::string &s) const;

    void logWarn(const std::string &s) const;
};


#endif //OMMS_CENTRAL_CPP_OBJECT_H
