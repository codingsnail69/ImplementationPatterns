#include "specific_watcher.hpp"
#include <iostream>
Specific_Watcher::Specific_Watcher(std::string name, int value) 
: name(name), value(value)
{}

void Specific_Watcher::update()
{
    value = subjects->value();
    std::cout << "Specific_Watcher " << name << " updated with value " << value << std::endl;
}

void Specific_Watcher::addSubject(Specific_Subject * subject)
{
    subjects = subject;
    subjects->addWatcher(this);
}