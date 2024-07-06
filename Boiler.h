#ifndef BOILER_H
#define BOILER_H

#include <string>

using namespace std;

class Boiler {
private:
    string company;
    string color;
    int power;
    double volume;
    int heatingTemperature;

public:
    Boiler();
    Boiler(const string& company, const string& color, int power, double volume, int heatingTemperature);

    void setCompany(const string& company);
    void setColor(const string& color);
    void setPower(int power);
    void setVolume(double volume);
    void setHeatingTemperature(int heatingTemperature);

    string getCompany() const;
    string getColor() const;
    int getPower() const;
    double getVolume() const;
    int getHeatingTemperature() const;

    ~Boiler();
};

#endif