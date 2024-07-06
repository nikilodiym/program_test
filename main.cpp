#include <iostream>
#include "Iron.h"

using namespace std;

int main() {
    Iron iron("Philips", "PowerLife", "Blue", 100, 200, true, 2400);

    cout << "Iron Information:" << endl;
    cout << "Company: " << iron.getCompany() << endl;
    cout << "Model: " << iron.getModel() << endl;
    cout << "Color: " << iron.getColor() << endl;
    cout << "Temperature Range: " << iron.getMinTemperature() << "°C - " << iron.getMaxTemperature() << "°C" << endl;
    cout << "Steam Feature: " << (iron.hasSteamFeature() ? "Yes" : "No") << endl;
    cout << "Power: " << iron.getPower() << " W" << :endl;

    return 0;
}