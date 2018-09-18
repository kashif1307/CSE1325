#include "gas_vehicle.h"
#include <iostream>
#include <string>

  
  // Gas_Vehicle::Gas_Vehicle(std::int yr, std::string mk, std:;string md, Body_style bodystyle, std::double miles_per_gallon, std::double max_gallon)


  Gas_Vehicle::Gas_Vehicle(double mpg, double mx_gal):Vehicle(int yr, std::string mk, std::string md, Body_style bodystyle)
  {
  year=yr;
  make=mk;
  model=md;
  Body_style=bodystyle;
  miles_per_gallon=mpg;
  max_gallons=mx_gal;
  }

  double Gas_Vehicle::gallons_consumed(double miles)
  {

    double gallons_consumed=miles/miles_per_gallon;

    if(gallons_consumed>max_gallon)
      {
	throw runtime_error("Gallons consumed can not be greater than the maximum capacity of the vehicle");
      }
    return gallons_consumed;
  }

