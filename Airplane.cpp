#include <iostream>
#include "Airplane.h"
using namespace std;

Airplane::Airplane() : Transport()
{}

Airplane::Airplane(string name, int speed) : Transport(name, speed)
{}

Airplane::~Airplane()
{}

void Airplane::Move() const
{
    cout << "Airplane " << m_name << " is flying in the sky. Speed: " << m_speed << " km/h" << endl;
}
