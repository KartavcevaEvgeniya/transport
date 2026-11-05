#pragma once
#include "Transport.h"

class Ship : public Transport
{
public:
    Ship();
    Ship(string name, int speed);
    ~Ship();

    void Move() const override;
};
