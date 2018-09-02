#include<iostream>

using namespace std;


class Polygon{

private:
  double perimeter;
  int sides;

public:
  Polygon()
  {
    perimeter = 0;
    sides = 0;
  }
  void add_side(double length)
  {
    perimeter+=length;
    sides++;
  }

  double get_perimeter()
  {
    return perimeter;
  }

  int get_sides()
  {
    return sides;    
  }
  
};
