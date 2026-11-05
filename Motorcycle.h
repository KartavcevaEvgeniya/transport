#pragma once
#include "Transport.h"

class Motorcycle : public Transport
{
public:
    Motorcycle();
    Motorcycle(string name, int speed);
    ~Motorcycle();

    void Move() const override;
};
