#include <iostream>
#include "specific_watcher.hpp"
#include "specific_subject.hpp"

int main()
{
    Specific_Subject subject;
    Specific_Watcher watcher1("watcher1", 0);
    Specific_Watcher watcher2("watcher2", 12);

    watcher1.addSubject(&subject);
    watcher2.addSubject(&subject);

    subject.setValue(1);

}