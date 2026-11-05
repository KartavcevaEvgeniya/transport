#include <iostream>
#include "Ship.h"
using namespace std;

Ship::Ship() : Transport()
{}

Ship::Ship(string name, int speed) : Transport(name, speed)
{}

Ship::~Ship()
{}

void Ship::Move() const
{
    cout << "Ship " << m_name << " is sailing on the sea. Speed: "<< m_speed << " km/h" << endl;
}
