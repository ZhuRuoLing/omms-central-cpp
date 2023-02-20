//
// Created by jkl-9 on 2023/2/18.
//

#include "CentralServer.h"

CentralServer::CentralServer() : Object("CentralServer") {

}

void CentralServer::setArguments(PropertiesSet& propertySet) {
    this->experimental = propertySet.getBool("experimental");
    this->test = propertySet.getBool("test");
    this->loadPlugin = !propertySet.getBool("noplugin");
    this->useFileLock = !propertySet.getBool("nolock");
    this->generateExample = propertySet.getBool("generateExample");
}

int CentralServer::main() const {
    logInfo("Hello World!");
    if (this->test){
        return executeTest();
    }
    if (!this->useFileLock){
        this->logInfo("Acquiring Lock.");
        if (this->acquireFileLock()){
            this->logError("Cannot acquire Lock, OMMS Central will exit.");
            this->logInfo("hint: Are you make sure there is not any instance of OMMS Central running in current working directory?");
        }
    }
    if (releaseFileLock()){
        this->logError("Cannot release Lock.");
    }
    logInfo("Bye.");
    return 0;
}

int CentralServer::executeTest() const {
    return 0;
}

int CentralServer::acquireFileLock() const {
    return 0;
}

int CentralServer::releaseFileLock() const {
    return 0;
}

CentralServer::~CentralServer() = default;
