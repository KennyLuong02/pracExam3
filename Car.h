#ifndef CAR_H
#define CAR_H
#include <string>

using namespace std;

class Car {
    protected:
        int price;
        int emissions;   // CO2 Emissions

    public:
    Car();
    Car(int price);   // creates a Car with a price

    void set_price(int prc);
    int get_price();

    // void set_emission(int prc);
    int get_emission();

    virtual void drive(int kms);
};
#endif
