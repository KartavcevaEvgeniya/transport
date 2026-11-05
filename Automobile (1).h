#pragma once
#include "Transport.h"

class Automobile : public Transport
{
public:
    Automobile();
    Automobile(string name, int speed);
    ~Automobile();

    void Move() const override;
};
