#include <iostream>
#include "vector"
#include "src/base/Object.h"
#include "src/CentralServer.h"
#include "src/arg_parser/ArgParser.h"

int main(int argc, char** argv) {
    std::cout << "Oh My Minecraft Server Central is running at pid " << _getpid() << std::endl;
    CentralServer server;
    std::cout << server.toString() << std::endl;
    std::vector<std::string> args;
    for (int i = 0; i < argc; ++i) {
        args.emplace_back(argv[i]);
    }
    PropertiesSet propertiesSet = ArgParser::parseToPropertiesSet(args);
    server.setArguments(propertiesSet);
    return server.main();
}
