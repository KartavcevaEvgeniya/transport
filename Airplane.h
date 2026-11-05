#pragma once
#include "Transport.h"

class Airplane : public Transport
{
public:
    Airplane();
    Airplane(string name, int speed);
    ~Airplane();

    void Move() const override;
};
