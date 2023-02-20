//
// Created by jkl-9 on 2023/2/19.
//

#ifndef OMMS_CENTRAL_CPP_LOGGER_H
#define OMMS_CENTRAL_CPP_LOGGER_H

#include "string"
#include "vector"
#include "../../libs/LibInclude.hpp"

using Level = spdlog::level::level_enum;

class Logger {
private:
    std::string name;
    std::shared_ptr<spdlog::logger> logger;
public:
    explicit Logger(std::string name);

    virtual ~Logger();

    void info(const std::string &info) const;

    void error(const std::string &info) const;

    void debug(const std::string &info) const;

    void trace(const std::string &info) const;

    void log(Level level, const std::string &info) const;

    void warn(const std::string &basicString) const;
};


#endif //OMMS_CENTRAL_CPP_LOGGER_H
