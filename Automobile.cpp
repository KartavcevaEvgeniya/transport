#include <iostream>
#include "Automobile.h"
using namespace std;

Automobile::Automobile() : Transport()
{}

Automobile::Automobile(string name, int speed) : Transport(name, speed)
{}

Automobile::~Automobile()
{}

void Automobile::Move() const
{
    cout << "Automobile " << m_name << " is driving on the road. Speed: " << m_speed << " km/h" << endl;
}
