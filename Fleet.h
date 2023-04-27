#ifndef FLEET_H
#define FLEET_H
#include <string>
#include "Car.h"

using namespace std;

class Fleet {
    protected:
        Car** fleet;

    public:
        Fleet();                        
        /* creates a fleet containing pointers to 5 Car objects as an array;
        The first and last objects are Ford, and the middle ones are Tesla.
        */

       Car **get_fleet();      // Returns the array of pointers to the five Car objects
};
#endif
