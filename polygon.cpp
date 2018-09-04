#include<iostream>

using namespace std;

class Polygon{

private:
  double perimeter;
  int sides;
  double lengths[10];

public:
  Polygon():perimeter(0), sides(0)
  {
      int i;
      for(i=0;i<10;i++)
	{
	  lengths[i]=0;
	}
  }

 
  
  void add_side(double length)
  {
    //    sides=0;
    lengths[sides]=length;
    sides++;
  }

  double get_perimeter()
  {
    int i;
    perimeter = 0;
    for(i=0;i<10;i++)
      {
	perimeter += lengths[i];
      }
    return perimeter;
  }

  int get_sides()
  {
    return sides;    
  }
  

  double get_area(double apothem)
  {
    double area= 0.5 * get_perimeter() * apothem;
   
    return area;
    
  }

 };
  

