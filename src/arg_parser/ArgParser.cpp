//
// Created by jkl-9 on 2023/2/18.
//

#include "ArgParser.h"

std::vector<std::string> boolArgsKey = {"test","generateExample", "noplugin","nolock", "experimental"};

PropertiesSet ArgParser::parseToPropertiesSet(const std::vector<std::string>& args) {
    PropertiesSet propertiesSet;
    for (auto &item: boolArgsKey){
        propertiesSet.putBool(item, std::count(args.begin(), args.end(),std::format("--{}",item)));
    }
    return propertiesSet;
}
