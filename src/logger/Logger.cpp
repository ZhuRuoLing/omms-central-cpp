//
// Created by jkl-9 on 2023/2/19.
//

#include "Logger.h"

#include <utility>


Logger::Logger(std::string name) : name(std::move(name)) {
    std::vector<spdlog::sink_ptr> sinks;
    sinks.push_back(std::make_shared<spdlog::sinks::stdout_color_sink_mt>());
    sinks.push_back(std::make_shared<spdlog::sinks::basic_file_sink_mt>("logs/OMMS_Central.log"));
    logger = std::make_shared<spdlog::logger>(this->name, begin(sinks), end(sinks));
    logger->set_pattern("%^[%Y-%m-%d %H:%M:%S.%F] [%l] (%n)%$ %v");
}

void Logger::info(const std::string &info) const {
    log(Level::info, info);
}

void Logger::error(const std::string &info) const {
    log(Level::err, info);
}

void Logger::debug(const std::string &info) const {
    log(Level::debug, info);
}

void Logger::trace(const std::string &info) const {
    log(Level::trace, info);
}

void Logger::log(Level level, const std::string& info) const {
    this->logger->log(level, info);
}

void Logger::warn(const std::string &basicString) const {
    log(Level::warn, basicString);
}

Logger::~Logger() = default;
