#include <string>
#include "Car.h"

using namespace std;

Car::Car() {
    price = 0;
    emissions = 0;
};

Car::Car(int prc) {
    price = prc;
    emissions = 0;
};

void Car::set_price(int prc) {
    price = prc;
};

int Car::get_price() {
    return price;
};

// void set_emission(int prc);

int Car::get_emissions() {
    return emissions;
};

void Car::drive(int kms) {
    emissions = kms * 10;
};