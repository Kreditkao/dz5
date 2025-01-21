#include <iostream>
#include "Car.h"
#include "Bicycle.h"
#include "Lorry.h"
#include "Garage.h"

int main() {
    Garage garage;

    Car* car = new Car(15000, 200, 2018, "Red", 4);
    Bicycle* bike = new Bicycle(500, 30, 2020, "Blue", true);
    Lorry* lorry = new Lorry(30000, 120, 2015, "Green", 10);

    garage.addVehicle(car);
    garage.addVehicle(bike);
    garage.addVehicle(lorry);

    std::cout << "Vehicles in the garage:" << std::endl;
    garage.displayVehicles();

    std::cout << "\nSorted vehicles by speed:" << std::endl;
    garage.sortVehiclesBySpeed();
    garage.displayVehicles();

    garage.removeVehicle(1); // Видалення велосипеда

    std::cout << "\nVehicles after removal:" << std::endl;
    garage.displayVehicles();

    return 0;
}
