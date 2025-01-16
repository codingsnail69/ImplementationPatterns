#include <iostream>
#include "befehl_ADD.hpp"
#include "scheduler.hpp"


int main()
{
    Scheduler sheduler_;
    Befehl_ADD befehl_add_;

    sheduler_.addBefehl(&befehl_add_);
    sheduler_.addBefehl(&befehl_add_);

    sheduler_.DoBefehl();
    sheduler_.DoBefehl();

    return 0;
}