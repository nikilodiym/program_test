#ifndef WASHINGMACHINE_H
#define WASHINGMACHINE_H

#include <string>

class WashingMachine {
private:
    std::string company;
    std::string color;
    double width;
    double length;
    double height;
    int power;
    int spinSpeed;
    int heatingTemperature;

public:
    WashingMachine();
    WashingMachine(const std::string& company, const std::string& color, double width, double length, double height,
        int power, int spinSpeed, int heatingTemperature);

    void setCompany(const std::string& company);
    void setColor(const std::string& color);
    void setDimensions(double width, double length, double height);
    void setPower(int power);
    void setSpinSpeed(int spinSpeed);
    void setHeatingTemperature(int heatingTemperature);

    std::string getCompany() const;
    std::string getColor() const;
    double getWidth() const;
    double getLength() const;
    double getHeight() const;
    int getPower() const;
    int getSpinSpeed() const;
    int getHeatingTemperature() const;

    ~WashingMachine();
};

#endif 