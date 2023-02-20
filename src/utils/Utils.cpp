//
// Created by jkl-9 on 2023/2/18.
//

#include "Utils.h"
#include "../CentralServer.h"

int fileExists(const std::string &fileName) {
    return std::ifstream(fileName).good();
}

int createFile(const std::string& fileName) {
    auto file = std::ofstream();
    file.open(fileName);
    file.close();
    return 0;
}


