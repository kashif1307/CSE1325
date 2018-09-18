#include "vehicle.h"
#include <iostream>
#include <string>


Vehicle::Vehicle(int yr, std::string mk, std::string md, Body_style bodystyle)
{

  year=yr;
  make=mk;
  model=md;
  Body_style=bodystyle;

}
int year()
{
  return year;
}
std::string make()
{
  return make;
}
std::string model()
{
  return model;
}

Body_style body_style()

{
  return body_style();
}

string Vehicle::to_string()
{

  std::string yrstr= std::to_string(year);
  return yrstr;
  return make;
  return model;

  map<Body_style,std:: string> bodystyle_to_str=
    {

      {Body_style::SEDAN, "SEDAN"},
      {Body_style::HATCHBACK,"HATCHBACK"},
      {Body_style::MINIVAN,"MINIVAN"},
      {Body_style::TRUCK,"TRUCK"},
      {Body_style::SUV,"SUV"},
      {Body_style::CROSSOVER,"CROSSOVER"},
    };
  return bodystyle_to_str;

}
      

