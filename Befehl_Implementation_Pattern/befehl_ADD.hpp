#pragma once

#include "befehl.hpp"


class Befehl_ADD : public Befehl
{
public:
    Befehl_ADD();
    ~Befehl_ADD();
    void ausfuehren() override;
    void rueckgaengig() override;
};