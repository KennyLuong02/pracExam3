#include <string>
#include <math.h>
#include "Car.h"
#include "Tesla.h"

using namespace std;

Tesla::Tesla(): Car(), model(' '), batteryPercentage(100) {};            

Tesla::Tesla(char model, int prc): Car(prc), model(model), batteryPercentage(100) {};  

void Tesla::set_model(char name) {model = name;};

char Tesla::get_model() {return model;};

void Tesla::set_batteryPercentage(float bat) {
    if (bat <= 0) {
        batteryPercentage = 0;
    } else if (bat >= 100) {
        batteryPercentage = 100;
    } else {
        batteryPercentage = bat;
    }
};

float Tesla::get_batteryPercentage() {return batteryPercentage;};

void Tesla::chargeBattery(int mins) {
    batteryPercentage = batteryPercentage + 0.5 * mins;
    if (batteryPercentage > 100) {
        batteryPercentage = 100;
    }
};

void Tesla::drive(int kms) {
    if (batteryPercentage == 0) {
            emissions = 0;
    } else {
        float battery = batteryPercentage;

        batteryPercentage = batteryPercentage - (kms * 0.2);
        emissions = kms * 74;

        if (batteryPercentage <= 0) {
            int km;

            km = battery * 5;

            batteryPercentage = 0;
            emissions = km * 74;
        }
    }
};









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

int Car::get_emission() {
    return emissions;
};

void Car::drive(int kms) {
    emissions = kms * 10;
};