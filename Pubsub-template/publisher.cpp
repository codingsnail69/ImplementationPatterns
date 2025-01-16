#include "publisher.hpp"

void publisher::addsubscriber(std::string topic, subscriber *  toSubscribe)
{
    subs_[topic].insert(toSubscribe);
}

void publisher::notify(std::string topic, std::string message)
{
    for(auto i : subs_[topic])
    {
        i->receiveNotification(message);
    }
}