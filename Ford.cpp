#include <string>
#include <math.h>
#include "Car.h"
#include "Ford.h"

using namespace std;

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