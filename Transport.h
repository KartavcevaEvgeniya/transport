#pragma once
#include <string>
using namespace std;

class Transport
{
protected:
    string m_name;
    int m_speed;

public:
    Transport();
    Transport(string name, int speed);
    virtual ~Transport();

    void SetName(string name);
    void SetSpeed(int speed);

    string GetName() const;
    int GetSpeed() const;

    virtual void Move() const;
};
