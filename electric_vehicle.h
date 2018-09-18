#include <iostream>
#ifndef  ELECTRIC_VEHICLE_H
#define  ELECTRIC_VEHICLE_H

#include "vehicle.h"
#include"gas_vehicle.h"

class Electric_Vehicle
{

public:

double kwh_consumed (double miles);


private:

double miles_per_kwh;
double max_kwh;

};

#endif
