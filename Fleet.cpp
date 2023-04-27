#include <string>
#include <math.h>
#include "Fleet.h"
#include "Car.h"
#include "Tesla.h"
#include "Ford.h"

using namespace std;

Fleet::Fleet() {
    Fleet* fleetOfCars[5];
    
    for (int i = 0; i < 0; i++) {
        fleetOfCars[i] = nullptr;
    }

    Car* c1 = new Tesla('S', 10000);
    fleetOfCars[0] = c1;
    Car* c2 = new Ford(1, 20000);
    Car* c3 = new Car(30000);;
    Car* c4 = new Ford(2, 40000);
    Car* c5 = new Tesla('T', 50000);

};

Car **get_fleet();










Ford::Ford(): Car(), badgeNumber(0), litresOfFuel(60) {};            

Ford::Ford(int badge, int prc): Car(), badgeNumber(badge), litresOfFuel(60) {};

void Ford::set_badgeNumber(int badge) {badgeNumber = badge;};      

int Ford::get_badgeNumber() {return badgeNumber;};

void Ford::set_litresOfFuel(float litres) {
    if (litres <= 0) {
        litresOfFuel = 0;
    } else if (litres >= 60) {
        litresOfFuel = 60;
    } else {
        litresOfFuel = litres;
    }
};

float Ford::get_litresOfFuel() {return litresOfFuel;};

void Ford::refuel(int litres) {
    litresOfFuel = litresOfFuel + litres;
    if (litresOfFuel > 60) {
        litresOfFuel = 60;
    }
};

void Ford::drive(int kms) {
    if (litresOfFuel == 0) {
            emissions = 0;
    } else {
        float lits = litresOfFuel;

        litresOfFuel = litresOfFuel - (kms * 0.2);
        emissions = kms * 234;

        if (litresOfFuel <= 0) {
            int km;

            km = lits * 5;

            litresOfFuel = 0;
            emissions = km * 234;
        }
    }
};