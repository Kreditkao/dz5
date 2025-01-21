#ifndef BICYCLE_H
#define BICYCLE_H

#include "Vehicle.h"

class Bicycle : public Vehicle {
private:
    bool hasGears;

public:
    Bicycle(double p, double s, int y, std::string c, bool g)
        : Vehicle(p, s, y, c), hasGears(g) {}

    void displayInfo() const override {
        std::cout << "Bicycle - Price: " << price << ", Max Speed: " << maxSpeed
            << ", Year: " << year << ", Color: " << color
            << ", Has Gears: " << (hasGears ? "Yes" : "No") << std::endl;
    }

    bool getHasGears() const { return hasGears; }
    void setHasGears(bool g) { hasGears = g; }
};

#endif // BICYCLE_H
