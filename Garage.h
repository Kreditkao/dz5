#ifndef GARAGE_H
#define GARAGE_H

#include <vector>
#include <algorithm> // Додати цей заголовний файл для використання std::sort
#include "Vehicle.h"
#include "Car.h"
#include "Bicycle.h"
#include "Lorry.h"

class Garage {
private:
    std::vector<Vehicle*> vehicles;

public:
    ~Garage() {
        for (auto v : vehicles) {
            delete v;
        }
    }

    void addVehicle(Vehicle* v) {
        vehicles.push_back(v);
    }

    void removeVehicle(int index) {
        if (index >= 0 && index < vehicles.size()) {
            delete vehicles[index];
            vehicles.erase(vehicles.begin() + index);
        }
    }

    Vehicle* findVehicleByTypeAndSpeed(const std::string& type, double speed) {
        for (auto v : vehicles) {
            if (type == "Car" && dynamic_cast<Car*>(v) && v->getMaxSpeed() == speed)
                return v;
            else if (type == "Bicycle" && dynamic_cast<Bicycle*>(v) && v->getMaxSpeed() == speed)
                return v;
            else if (type == "Lorry" && dynamic_cast<Lorry*>(v) && v->getMaxSpeed() == speed)
                return v;
        }
        return nullptr;
    }

    void displayVehicles() const {
        for (auto v : vehicles) {
            v->displayInfo();
        }
    }

    void sortVehiclesBySpeed() {
        std::sort(vehicles.begin(), vehicles.end(), [](Vehicle* a, Vehicle* b) {
            return a->getMaxSpeed() < b->getMaxSpeed();
            });
    }
};

#endif // GARAGE_H
