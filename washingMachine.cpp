#include "WashingMachine.h"

WashingMachine::WashingMachine() {
    company = "";
    color = "";
    width = 0.0;
    length = 0.0;
    height = 0.0;
    power = 0;
    spinSpeed = 0;
    heatingTemperature = 0;
}

WashingMachine::WashingMachine(const std::string& company, const std::string& color, double width, double length, double height,
    int power, int spinSpeed, int heatingTemperature) {
    this->company = company;
    this->color = color;
    this->width = width;
    this->length = length;
    this->height = height;
    this->power = power;
    this->spinSpeed = spinSpeed;
    this->heatingTemperature = heatingTemperature;
}

void WashingMachine::setCompany(const std::string& company) {
    this->company = company;
}

void WashingMachine::setColor(const std::string& color) {
    this->color = color;
}

void WashingMachine::setDimensions(double width, double length, double height) {
    this->width = width;
    this->length = length;
    this->height = height;
}

void WashingMachine::setPower(int power) {
    this->power = power;
}

void WashingMachine::setSpinSpeed(int spinSpeed) {
    this->spinSpeed = spinSpeed;
}

void WashingMachine::setHeatingTemperature(int heatingTemperature) {
    this->heatingTemperature = heatingTemperature;
}

std::string WashingMachine::getCompany() const {
    return company;
}

std::string WashingMachine::getColor() const {
    return color;
}

double WashingMachine::getWidth() const {
    return width;
}

double WashingMachine::getLength() const {
    return length;
}

double WashingMachine::getHeight() const {
    return height;
}

int WashingMachine::getPower() const {
    return power;
}

int WashingMachine::getSpinSpeed() const {
    return spinSpeed;
}

int WashingMachine::getHeatingTemperature() const {
    return heatingTemperature;
}

