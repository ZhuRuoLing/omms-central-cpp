//
// Created by jkl-9 on 2023/2/18.
//

#ifndef OMMS_CENTRAL_CPP_CENTRALSERVER_H
#define OMMS_CENTRAL_CPP_CENTRALSERVER_H


#include "base/Object.h"
#include "utils/PropertiesSet.h"

class CentralServer: public Object{
private:

public:
    explicit CentralServer();

    ~CentralServer() override;

    void setArguments(PropertiesSet propertySet);
    int main();
};


#endif //OMMS_CENTRAL_CPP_CENTRALSERVER_H
