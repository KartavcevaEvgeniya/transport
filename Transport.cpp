#include <iostream>
#include "Transport.h"
using namespace std;

Transport::Transport()
{
    m_name = "Unknown";
    m_speed = 0;
}

Transport::Transport(string name, int speed)
{
    m_name = name;
    m_speed = speed;
}

Transport::~Transport()
{
}

void Transport::SetName(string name)
{
    m_name = name;
}

void Transport::SetSpeed(int speed)
{
    m_speed = speed;
}

string Transport::GetName() const
{
    return m_name;
}

int Transport::GetSpeed() const
{
    return m_speed;
}

void Transport::Move() const
{
    cout << "Transport is moving" << endl;
}
