//
// Created by jkl-9 on 2023/2/18.
//

#ifndef OMMS_CENTRAL_CPP_ARGPARSER_H
#define OMMS_CENTRAL_CPP_ARGPARSER_H


#include "../utils/PropertiesSet.h"
#include "vector"
#include "format"
class ArgParser {
public:
    static PropertiesSet parseToPropertiesSet(const std::vector<std::string> &args);
};


#endif //OMMS_CENTRAL_CPP_ARGPARSER_H
