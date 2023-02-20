cmake_minimum_required(VERSION 3.24)

project(omms_central_cpp)
set(CMAKE_CXX_STANDARD 23)

add_subdirectory(libs/spdlog)
add_subdirectory(libs/cpptoml)

add_executable(omms_central_cpp
        main.cpp
        src/utils/GlobalInclude.h
        src/CentralServer.cpp
        src/CentralServer.h
        libs/LibInclude.hpp
        src/utils/Utils.cpp
        src/utils/Utils.h
        src/arg_parser/ArgParser.cpp
        src/arg_parser/ArgParser.h
        src/utils/PropertiesSet.cpp
        src/utils/PropertiesSet.h
        src/base/Object.cpp
        src/base/Object.h
        src/logger/Logger.cpp
        src/logger/Logger.h
        src/command/CommandDispatcher.hpp
        src/console/ConsoleThread.cpp
        src/console/ConsoleThread.h
        src/base/Thread.hpp)
target_link_libraries(omms_central_cpp spdlog::spdlog cpptoml)