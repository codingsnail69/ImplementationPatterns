#pragma once
#include "befehl.hpp"
#include <queue>

class Scheduler
{
private:
    std::queue<Befehl*> befehle;

public:
    Scheduler();
    ~Scheduler();
    void addBefehl(Befehl* befehl);
    void removeBefehl();
    void DoBefehl();
};
