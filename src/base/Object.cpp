//
// Created by jkl-9 on 2023/2/18.
//

#include "Object.h"

#include <utility>

void Object::logError(const std::string& s) const {
    logger.error(s);
}

void Object::logInfo(const std::string& s) const {
    logger.info(s);
}

void Object::logDebug(const std::string& s) const {
    logger.debug(s);
}

Object::Object(std::string name): logger(name) {
    this->name = std::move(name);
}
