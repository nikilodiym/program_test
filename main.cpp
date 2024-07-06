#include <iostream>
#include "Boiler.h"

using namespace std;

int main() {
    Boiler boiler("Ariston", "White", 2000, 100.0, 75);

    cout << "Boiler Information:" << endl;
    cout << "Company: " << boiler.getCompany() << endl;
    cout << "Color: " << boiler.getColor() << endl;
    cout << "Power: " << boiler.getPower() << " W" << endl;
    cout << "Volume: " << boiler.getVolume() << " liters" << endl;
    cout << "Heating Temperature: " << boiler.getHeatingTemperature() << " °C" << endl;

    return 0;
}