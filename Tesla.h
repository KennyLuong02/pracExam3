#ifndef TESLA_H
#define TESLA_H
#include <string>
#include "Car.h"

using namespace std;

class Tesla: public Car {
    protected:
        char model;
        float batteryPercentage;      // Initially 100%

    public:
        Tesla();            
        Tesla(char model, int prc);

        void set_model(char name);
        char get_model();

        void set_batteryPercentage(float bat);
        float get_batteryPercentage();

        void chargeBattery(int mins);            
        void drive(int kms);     
};
#endif
