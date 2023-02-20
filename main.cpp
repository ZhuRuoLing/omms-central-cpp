#include <iostream>
#include "vector"
#include "src/base/Object.h"
#include "src/CentralServer.h"
#include "src/arg_parser/ArgParser.h"
#include "libs/LibInclude.hpp"
#include "src/utils/Utils.h"

using namespace spdlog;

int main(int argc, char** argv) {
    //set_pattern("%^[%Y-%m-%d %H:%M:%S.%F] [%l] (%n)%$ %v");
    Logger logger = Logger("Main");
    logger.info(std::format("Oh My Minecraft Server Central is running at pid {}", _getpid()));
    CentralServer server;
    logger.info("Using OMMS Central Server instance: " + server.toString());
    std::vector<std::string> args;
    for (int i = 0; i < argc; ++i) {
        args.emplace_back(argv[i]);
    }
    PropertiesSet propertiesSet = ArgParser::parseToPropertiesSet(args);

    return server.main();
}
