
#include <iostream>
using namespace std;
class Vehicle
{
private:
    int tyre = 4;
    string control = "Steering Wheel";
    int lights = 2;
    int *tanksize = new int(20);

public:
    Vehicle()
    {
        cout << "-----------------------" << endl;
        cout << "Default Constructer Called" << endl;
    }
    Vehicle(int tyre, string control, int lights, int size)
    {
        cout << "-----------------------" << endl;
        cout << "Parametraized Constructer is Called" << endl;
        this->tyre = tyre;
        this->control = control;
        this->lights = lights;
        *tanksize = size;
    }
    void vehicle_info()
    {
        cout << "A vehicle which has " << tyre << " Tyres \nControlled by " << control << "\nHas " << lights << " Lights \nAnd Has Fuel tank size of " << *tanksize << " liters" << endl;
        if (tyre == 4)
            cout << "Is Known As Car" << endl;
        else if (tyre == 3)
            cout << "Is Known as QingQi Rikshaw." << endl;
        else
            cout << "Is unknown." << endl;
    }
    ~Vehicle()
    {
        delete tanksize;
        cout << "Destructer is Called" << endl;
        cout << "-----------------------" << endl;
    }
};
int main()
{
    Vehicle car;
    car.vehicle_info();

    Vehicle Rkshw(3, "Handle", 1, 10);
    Rkshw.vehicle_info();
}
