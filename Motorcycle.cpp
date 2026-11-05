#include <iostream>
#include "Motorcycle.h"
using namespace std;

Motorcycle::Motorcycle() : Transport()
{}

Motorcycle::Motorcycle(string name, int speed) : Transport(name, speed)
{}

Motorcycle::~Motorcycle()
{}

void Motorcycle::Move() const
{
    cout << "Motorcycle " << m_name << " is riding on the road. Speed: " << m_speed << " km/h" << endl;
}
