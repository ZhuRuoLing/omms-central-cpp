//
// Created by jkl-9 on 2023/2/18.
//

#ifndef OMMS_CENTRAL_CPP_UTILS_H
#define OMMS_CENTRAL_CPP_UTILS_H

#include "../../libs/LibInclude.hpp"
#include "filesystem"
#include "../CentralServer.h"

int fileExists(const std::string &fileName);

int createFile(const std::string& fileName);

#endif //OMMS_CENTRAL_CPP_UTILS_H
