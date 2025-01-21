#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>

class Vehicle {
protected:
    double price;
    double maxSpeed;
    int year;
    std::string color;

public:
    Vehicle(double p, double s, int y, std::string c)
        : price(p), maxSpeed(s), year(y), color(c) {}

    virtual void displayInfo() const = 0; // Чисто віртуальна функція

    double getPrice() const { return price; }
    double getMaxSpeed() const { return maxSpeed; }
    int getYear() const { return year; }
    std::string getColor() const { return color; }

    void setPrice(double p) { price = p; }
    void setMaxSpeed(double s) { maxSpeed = s; }
    void setYear(int y) { year = y; }
    void setColor(std::string c) { color = c; }
};

#endif // VEHICLE_H
