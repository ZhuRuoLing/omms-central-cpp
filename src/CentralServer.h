//
// Created by jkl-9 on 2023/2/18.
//

#ifndef OMMS_CENTRAL_CPP_CENTRALSERVER_H
#define OMMS_CENTRAL_CPP_CENTRALSERVER_H


#include "base/Object.h"
#include "utils/PropertiesSet.h"

class CentralServer : public Object {
private:
    bool loadPlugin = true;
    bool test = false;
    bool generateExample = false;
    bool useFileLock = true;
    bool experimental = false;
public:
    explicit CentralServer();

    ~CentralServer() override;

    [[nodiscard]] int main() const;

    void setArguments(PropertiesSet &propertySet);
private:
    [[nodiscard]] int executeTest() const;
    [[nodiscard]] int acquireFileLock() const;
    [[nodiscard]] int releaseFileLock() const;

};


#endif //OMMS_CENTRAL_CPP_CENTRALSERVER_H
