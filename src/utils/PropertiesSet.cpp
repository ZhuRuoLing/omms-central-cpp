//
// Created by jkl-9 on 2023/2/18.
//

#include "PropertiesSet.h"

PropertiesSet::PropertiesSet() = default;

PropertiesSet::~PropertiesSet() = default;

int PropertiesSet::getInteger(const std::string &key) {
    return get<int>(key);
}

std::string PropertiesSet::getString(const std::string &key) {
    return get<std::string>(key);
}

bool PropertiesSet::getBool(const std::string &key) {
    return get<bool>(key);
}

void PropertiesSet::putInteger(const std::string &key, int value) {
    this->m.insert({key, std::variant<int, bool, std::string>(value)});
}

void PropertiesSet::putBool(const std::string &key, bool value) {
    this->m.insert({key, std::variant<int, bool, std::string>(value)});
}

void PropertiesSet::putString(const std::string &key, const std::string &value) {
    this->m.insert({key, std::variant<int, bool, std::string>(value)});
}

template<typename T>
T PropertiesSet::get(const std::string &key) {
    return std::get<T>(m[key]);
}
