#include <iostream>
#include <string>
#include "Automobile.h"
#include "Ship.h"
#include "Airplane.h"
#include "Motorcycle.h"

using namespace std;

int main()
{
    Transport* transport = nullptr;

    int choice;
    int speed;
    string name;

    do
    {
        cout << "1. Create Automobile" << endl;
        cout << "2. Create Ship" << endl;
        cout << "3. Create Airplane" << endl;
        cout << "4. Create Motorcycle" << endl;
        cout << "5. Show movement" << endl;
        cout << "6. Show information" << endl;
        cout << "7. Change speed" << endl;
        cout << "8. Change name" << endl;
        cout << "0. Exit" << endl;

        cout << "Choose: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4)
        {
            cout << "Enter name: ";
            cin >> name;

            cout << "Enter speed: ";
            cin >> speed;

            delete transport;
            transport = nullptr;

            switch (choice)
            {
            case 1:
                transport = new Automobile(name, speed);
                break;

            case 2:
                transport = new Ship(name, speed);
                break;

            case 3:
                transport = new Airplane(name, speed);
                break;

            case 4:
                transport = new Motorcycle(name, speed);
                break;
            }

            cout << "Transport created!" << endl;
        }
        else if (choice == 5)
        {
            if (transport != nullptr)
            {
                transport->Move();
            }
            else
            {
                cout << "Create transport first!" << endl;
            }
        }
        else if (choice == 6)
        {
            if (transport != nullptr)
            {
                cout << "Name: "<< transport->GetName() << endl;
                cout << "Speed: " << transport->GetSpeed()<< " km/h" << endl;
            }
            else
            {
                cout << "Create transport first!" << endl;
            }
        }
        else if (choice == 7)
        {
            if (transport != nullptr)
            {
                cout << "Enter new speed: ";
                cin >> speed;

                transport->SetSpeed(speed);
            }
            else
            {
                cout << "Create transport first!" << endl;
            }
        }
        else if (choice == 8)
        {
            if (transport != nullptr)
            {
                cout << "Enter new name: ";
                cin >> name;

                transport->SetName(name);
            }
            else
            {
                cout << "Create transport first!" << endl;
            }
        }

    } while (choice != 0);

    delete transport;
    return 0;
}
