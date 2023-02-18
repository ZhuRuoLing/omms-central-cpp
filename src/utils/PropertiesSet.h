//
// Created by jkl-9 on 2023/2/18.
//

#ifndef OMMS_CENTRAL_CPP_PROPERTIESSET_H
#define OMMS_CENTRAL_CPP_PROPERTIESSET_H

#include "string"
#include "any"
#include "map"
#include "variant"
class PropertiesSet {
private:
    std::map<std::string, std::variant<int, bool, std::string>> m;
public:
    PropertiesSet();
    virtual ~PropertiesSet();
    int getInteger(const std::string& key);

    std::string getString(const std::string& key);

    bool getBool(const std::string& key);

    void putInteger(const std::string& key, int value);
    void putBool(const std::string& key, bool value);
    void putString(const std::string& key, const std::string& value);

    template<typename T>
    T get(const std::string &key);
};


#endif //OMMS_CENTRAL_CPP_PROPERTIESSET_H
