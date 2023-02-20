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

int CentralServer::main() {
    logInfo("Hello World!");
    if (this->test){
        return executeTest();
    }
    if (createFilesAndFolders()){
        this->logWarn("Seems that config of OMMS Central is not complete.");
        this->logInfo("You may complete those configs to continue.");
        return 1;
    }

    consoleThread.start();

    consoleThread.join();
    logInfo("Bye.");
    return 0;
}

int CentralServer::createFilesAndFolders() const {
    int count = 0;
    auto files = {"config.toml", "permission.toml"};
    for (const auto &item: files) {
        if (!fileExists(item)){
            logger.info(std::format("Creating file {}", item));
            createFile(item);
            count ++;
        }
    }
    auto folders = {"announcement", "whitelist", "logs", "plugins", "controllers"};
    for (const auto &item: folders) {
        count += std::filesystem::create_directories(item);
    }
    return count;
}


int CentralServer::executeTest() const {
    logInfo("LogInfo");
    logWarn("LogWarn");
    logError("LogError");
    createFilesAndFolders();
    return 0;
}

CentralServer::~CentralServer() = default;

