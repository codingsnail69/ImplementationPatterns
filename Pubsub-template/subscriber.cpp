#include "subscriber.hpp"
#include <iostream>

void subscriber::receiveNotification(std::string message)
{
    std::cout << name_ << " : " << message <<std::endl;
}