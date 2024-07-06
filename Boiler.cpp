#include "Boiler.h"

using namespace std;

Boiler::Boiler() {
    company = "";
    color = "";
    power = 0;
    volume = 0.0;
    heatingTemperature = 0;
}

Boiler::Boiler(const string& company, const string& color, int power, double volume, int heatingTemperature) {
    this->company = company;
    this->color = color;
    this->power = power;
    this->volume = volume;
    this->heatingTemperature = heatingTemperature;
}

void Boiler::setCompany(const string& company) {
    this->company = company;
}

void Boiler::setColor(const string& color) {
    this->color = color;
}

void Boiler::setPower(int power) {
    this->power = power;
}

void Boiler::setVolume(double volume) {
    this->volume = volume;
}

void Boiler::setHeatingTemperature(int heatingTemperature) {
    this->heatingTemperature = heatingTemperature;
}

string Boiler::getCompany() const {
    return company;
}

string Boiler::getColor() const {
    return color;
}

int Boiler::getPower() const {
    return power;
}

double Boiler::getVolume() const {
    return volume;
}

int Boiler::getHeatingTemperature() const {
    return heatingTemperature;
}
