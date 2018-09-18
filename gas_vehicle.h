#include<iostream>
#ifndef  GAS_VEHICLE_H
#define  GAS_VEHICLE_H

#include "vehicle.h"


class Gas_Vehicle
{

public:

double gallons_consumed (double miles);


private:

double miles_per_gallon;
double max_gallons;

};

#endif
