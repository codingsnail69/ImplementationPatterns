#include "befehl_ADD.hpp"
#include <iostream>

Befehl_ADD::Befehl_ADD() {}

Befehl_ADD::~Befehl_ADD() {}

void Befehl_ADD::ausfuehren()
{
    std::cout << "ADD" << std::endl;
}

void Befehl_ADD::rueckgaengig()
{
    std::cout << "UNDO ADD" << std::endl;
}