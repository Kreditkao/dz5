#ifndef LORRY_H
#define LORRY_H

#include "Vehicle.h"

class Lorry : public Vehicle {
private:
    double loadCapacity;

public:
    Lorry(double p, double s, int y, std::string c, double lc)
        : Vehicle(p, s, y, c), loadCapacity(lc) {}

    void displayInfo() const override {
        std::cout << "Lorry - Price: " << price << ", Max Speed: " << maxSpeed
            << ", Year: " << year << ", Color: " << color
            << ", Load Capacity: " << loadCapacity << " tons" << std::endl;
    }

    double getLoadCapacity() const { return loadCapacity; }
    void setLoadCapacity(double lc) { loadCapacity = lc; }
};

#endif // LORRY_H
