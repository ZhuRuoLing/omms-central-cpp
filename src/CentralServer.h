//
// Created by jkl-9 on 2023/2/18.
//

#ifndef OMMS_CENTRAL_CPP_CENTRALSERVER_H
#define OMMS_CENTRAL_CPP_CENTRALSERVER_H


#include "base/Object.h"
#include "utils/PropertiesSet.h"
#include "console/ConsoleThread.h"
#include "utils/GlobalInclude.h"

class CentralServer : public Object {
private:
    bool loadPlugin = true;
    bool test = false;
    bool generateExample = false;
    bool useFileLock = true;
    bool experimental = false;
    ConsoleThread consoleThread = ConsoleThread();
public:
    explicit CentralServer();

    ~CentralServer() override;

    [[nodiscard]] int main();

    void setArguments(PropertiesSet &propertySet);
private:
    int createFilesAndFolders() const;
    [[nodiscard]] int executeTest() const;
};


#endif //OMMS_CENTRAL_CPP_CENTRALSERVER_H
