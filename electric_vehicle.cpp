#include "electric_vehicle.h"
#include <iostream>
#include <string>

  
//Electric_Vehicle::Electric_Vehicle(std::int yr, std::string mk, std:;string md, Body_style bodystyle, std::double miles_per_gallon, std::double max_gallon)

Electric_Vehicle::Electric_Vehicle(double mpkw,double mx_kw):Vehicle(int yr, std::string mk, std::string md, Body_style bodystyle)
  {

  year=yr;
  make=mk;
  model=md;
  Body_style=bodystyle;
  miles_per_kwh=mpkw;
  max_kwh=mx_kw;


    
  }

double Electric__Vehicle::kwh_consumed(double miles)
  {

    double kwh_consumed=miles/kwph;

    if(kwh_consumed>max_kwh)
      {
	throw runtime_error("Electricity consumed can not be greater than the maximum capacity of the vehicle");
      }
    return kwh_consumed;
  }


