#ifndef FORD_H
#define FORD_H
#include <string>
#include "Car.h"

using namespace std;

class Ford: public Car {
    protected:
        int badgeNumber;
        float litresOfFuel;      // Initially 60L

    public:
        Ford();
        Ford(int badge, int prc);

        void set_badgeNumber(int badge);
        int get_badgeNumber();

        void set_litresOfFuel(float litres);
        float get_litresOfFuel();

        void refuel(int litres);
        void drive(int kms);
};
#endif
