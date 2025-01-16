#pragma once
#include "watcher.hpp"
#include "specific_subject.hpp"
#include <string>


class Specific_Watcher : public Watcher
{
private:
    std::string name;
    int value;
    Specific_Subject * subjects;
public:
    Specific_Watcher(std::string name, int value);
    void update() override;
    void addSubject(Specific_Subject * subject);
};