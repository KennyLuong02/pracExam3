#include <iostream>
#include <string>
#include <math.h>
#include "Car.h"

using namespace std;

int main() {
    Car c1 = Car(30);
    Car c2;

    c1.set_price(20);

    c1.get_price();

    c1.drive(50);

    cout << "The emission for c1 is: " << c1.get_emissions() << endl;
    cout << "The emission for c2 is: " << c2.get_emissions() << endl;

    return 0;
}