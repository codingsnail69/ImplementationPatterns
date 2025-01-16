#pragma once
#include "subject.hpp"

class Specific_Subject : public Subject
{
private:
    int value_;
public:
    void setValue(int);
    int value();
};
