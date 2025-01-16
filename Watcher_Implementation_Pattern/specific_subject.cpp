#include "specific_subject.hpp"

void Specific_Subject::setValue(int value)
{
    value_ = value;
    notifyWatchers();
}

int Specific_Subject::value()
{
    return value_;
}