#include "scheduler.hpp"

Scheduler::Scheduler() {}

void Scheduler::addBefehl(Befehl * befehl) {
    befehle.push(befehl);
}

Scheduler::~Scheduler() {}

void Scheduler::removeBefehl() {
    befehle.pop();
}

void Scheduler::DoBefehl() {
    Befehl * neueste =  befehle.front();
    neueste->ausfuehren();
    befehle.pop();
}





