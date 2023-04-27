#include <iostream>
#include <string>
#include <math.h>
#include "Car.h"
#include "Tesla.h"

using namespace std;

int main() {
    //Car* c1 = new Tesla('S', 30);
    //Car* c2 = new Tesla();

    Car* c1 = new Tesla('S', 30);
    //Tesla c2;

    // c1.set_model('T');

    // c1.set_batteryPercentage(90);
    // c1.get_batteryPercentage();

    // c1.chargeBattery(10);            
    // c1.drive(100);

    // cout << "The c1 is: " << c1.get_model() << ", and the battery is: " << c1.get_batteryPercentage() << endl;
    //cout << "The c2 is: " << c2.get_model() << ", and the battery is: " << c2.get_batteryPercentage() << endl;

    return 0;
}