#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int numDoors;

public:
    Car(double p, double s, int y, std::string c, int d)
        : Vehicle(p, s, y, c), numDoors(d) {}

    void displayInfo() const override {
        std::cout << "Car - Price: " << price << ", Max Speed: " << maxSpeed
            << ", Year: " << year << ", Color: " << color
            << ", Doors: " << numDoors << std::endl;
    }

    int getNumDoors() const { return numDoors; }
    void setNumDoors(int d) { numDoors = d; }
};

#endif // CAR_H
