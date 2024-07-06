#include <iostream>
#include "WashingMachine.h"

using namespace std;

int main() {
    WashingMachine machine("Samsung", "White", 60.0, 80.0, 100.0, 1500, 1200, 60);

    cout << "Washing Machine Information:" << endl;
    cout << "Company: " << machine.getCompany() << endl;
    cout << "Color: " << machine.getColor() << endl;
    cout << "Dimensions (WxLxH): " << machine.getWidth() << "x" << machine.getLength() << "x" << machine.getHeight() << " cm" << std::endl;
    cout << "Power: " << machine.getPower() << " W" << endl;
    cout << "Spin Speed: " << machine.getSpinSpeed() << " rpm" << endl;
    cout << "Heating Temperature: " << machine.getHeatingTemperature() << " °C" << endl;

	system("pause");
    return 0;
}