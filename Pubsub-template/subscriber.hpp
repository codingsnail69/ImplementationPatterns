#pragma once

#include <string>
#include "string.h"
class subscriber
{
private:
    std::string name_;
public:
    subscriber(std::string name) : name_(name) {}
    void receiveNotification(std::string);
};