#include "Iron.h"

using namespace std;

Iron::Iron() {
    company = "";
    model = "";
    color = "";
    minTemperature = 0;
    maxTemperature = 0;
    steamFeature = false;
    power = 0;
}

Iron::Iron(const string& company, const string& model, const string& color,
    int minTemperature, int maxTemperature, bool steamFeature, int power) {
    this->company = company;
    this->model = model;
    this->color = color;
    this->minTemperature = minTemperature;
    this->maxTemperature = maxTemperature;
    this->steamFeature = steamFeature;
    this->power = power;
}

void Iron::setCompany(const string& company) {
    this->company = company;
}

void Iron::setModel(const string& model) {
    this->model = model;
}

void Iron::setColor(const string& color) {
    this->color = color;
}

void Iron::setTemperatureRange(int minTemperature, int maxTemperature) {
    this->minTemperature = minTemperature;
    this->maxTemperature = maxTemperature;
}

void Iron::setSteamFeature(bool steamFeature) {
    this->steamFeature = steamFeature;
}

void Iron::setPower(int power) {
    this->power = power;
}

string Iron::getCompany() const {
    return company;
}

string Iron::getModel() const {
    return model;
}

string Iron::getColor() const {
    return color;
}

int Iron::getMinTemperature() const {
    return minTemperature;
}

int Iron::getMaxTemperature() const {
    return maxTemperature;
}

bool Iron::hasSteamFeature() const {
    return steamFeature;
}

int Iron::getPower() const {
    return power;
}
