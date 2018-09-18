#include<iostream>

#ifndef  VEHICLE_H
#define  VEHICLE _H

enum class Body_style {SEDAN,HATCHBACK,MINIVAN,TRUCK,SUV,CROSSOVER};


class Vehicle{


public:
Vehicle(int year, std::string make, std::string model, Body_style body_style);
std::string to_string(Body_style body_style);
int year_1();
std::string make_1();
std::string model_1();
Body_style body_style_1();

private:

std::string make;
std::string model;
int year;
Body_style body_style;

};

#endif

