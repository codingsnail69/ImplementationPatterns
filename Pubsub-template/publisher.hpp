#pragma once

#include <map>
#include <string>
#include <set>
#include "subscriber.hpp"

class publisher
{
private:
    std::string name_;
    std::map<std::string, std::set<subscriber *> > subs_;
public:
    publisher(std::string name = "") : name_(name){}
    void addsubscriber(std::string, subscriber *);
    void notify(std::string, std::string);
};
