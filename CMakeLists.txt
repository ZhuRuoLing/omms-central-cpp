cmake_minimum_required(VERSION 3.24)
project(omms_central_cpp)

set(CMAKE_CXX_STANDARD 23)
add_executable(omms_central_cpp main.cpp src/utils/GlobalInclude.h src/CentralServer.cpp src/CentralServer.h libs/argparse/argparse.hpp libs/LibInclude.hpp src/utils/Utils.cpp src/utils/Utils.h src/arg_parser/ArgParser.cpp src/arg_parser/ArgParser.h src/utils/PropertiesSet.cpp src/utils/PropertiesSet.h src/base/Object.cpp src/base/Object.h)
