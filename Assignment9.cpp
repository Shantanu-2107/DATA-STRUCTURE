
#include <iostream>
using namespace std;

// Base class
class Vehicle
{
private:
    int vehicleNumber;
    string brand;
    float price;

public:
    void getVehicle()
    {
        cout << "Enter Vehicle Number: ";
        cin >> vehicleNumber;

        cout << "Enter Brand: ";
        cin >> brand;

        cout << "Enter Price: ";
        cin >> price;
    }

    void displayVehicle()
    {
        cout << "\nVehicle Number: " << vehicleNumber;
        cout << "\nBrand: " << brand;
        cout << "\nPrice: " << price;
    }
};

// Derived class Car
class Car : public Vehicle
{
    int seats;

public:
    void getCar()
    {
        getVehicle();
        cout << "Enter Number of Seats: ";
        cin >> seats;
    }

    void displayCar()
    {
        displayVehicle();
        cout << "\nNumber of Seats: " << seats;
    }
};

// Derived class Bus
class Bus : public Vehicle
{
    int capacity;

public:
    void getBus()
    {
        getVehicle();
        cout << "Enter Passenger Capacity: ";
        cin >> capacity;
    }

    void displayBus()
    {
        displayVehicle();
        cout << "\nPassenger Capacity: " << capacity;
    }
};

// Derived class Truck
class Truck : public Vehicle
{
    float loadCapacity;

public:
    void getTruck()
    {
        getVehicle();
        cout << "Enter Load Capacity (tons): ";
        cin >> loadCapacity;
    }

    void displayTruck()
    {
        displayVehicle();
        cout << "\nLoad Capacity: " << loadCapacity << " tons";
    }
};

// Main function
int main()
{
    Car c;
    Bus b;
    Truck t;

    cout << "\n--- Enter Car Details ---\n";
    c.getCar();

    cout << "\n--- Enter Bus Details ---\n";
    b.getBus();

    cout << "\n--- Enter Truck Details ---\n";
    t.getTruck();

    cout << "\n\n===== TRANSPORT MANAGEMENT SYSTEM =====";

    cout << "\n\n--- Car Details ---";
    c.displayCar();

    cout << "\n\n--- Bus Details ---";
    b.displayBus();

    cout << "\n\n--- Truck Details ---";
    t.displayTruck();

    return 0;
}
