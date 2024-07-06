#ifndef IRON_H
#define IRON_H

#include <string>

using namespace std;

class Iron {
private:
    string company;
    string model;
    string color;
    int minTemperature;
    int maxTemperature;
    bool steamFeature;
    int power;

public:
    Iron();
    Iron(const string& company, const string& model, const string& color,
        int minTemperature, int maxTemperature, bool steamFeature, int power);

    void setCompany(const string& company);
    void setModel(const string& model);
    void setColor(const string& color);
    void setTemperatureRange(int minTemperature, int maxTemperature);
    void setSteamFeature(bool steamFeature);
    void setPower(int power);

    string getCompany() const;
    string getModel() const;
    string getColor() const;
    int getMinTemperature() const;
    int getMaxTemperature() const;
    bool hasSteamFeature() const;
    int getPower() const;

    ~Iron();
};

#endif 