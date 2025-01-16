#pragma once

class Befehl
{
public:
    Befehl();
    virtual ~Befehl() = 0;
    virtual void ausfuehren() = 0;
    virtual void rueckgaengig() = 0;

};