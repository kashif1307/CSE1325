#include <iostream>
#include "polygon.cpp"

using namespace std;

int main()
{
  Polygon polygon;
  double temp;
  while (1)
    {
      cout<< "Please enter a length of a new side"<<endl;
      cin>>temp;

					       
      if(temp<=0)
	   break;
      else
      {
	polygon.add_side(temp);
      }
    }
							      
  cout << "Num of sides is " << polygon.get_sides() << endl;
  cout << "Perimeter is " << polygon.get_perimeter() << endl;
}
	  
						
      