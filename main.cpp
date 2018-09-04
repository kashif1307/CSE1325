#include <iostream>
#include "polygon.cpp"

using namespace std;

int main()
{
  Polygon polygon;
  double temp;
  int count = 0;
  while (1)
    {
      count++;
      if (count > 10){
	cout<<"You have exceeded the array limit "<< endl;
	break;
      }
      cout<< "Please enter a length of a new side"<<endl;
      cin>>temp;

					       
      if(temp<=0)
	   break;
      else
      {
	polygon.add_side(temp);
      }
    }
  
   cout<< "Please enter the value of the apothem" <<endl;
    double ap;
   cin>>ap;
   if(ap>0)
   {
    cout<<"The area of the regular polygon is "<< polygon.get_area(ap)<<endl;
   }
  cout << "Num of sides is " << polygon.get_sides() << endl;
  cout << "Perimeter is " << polygon.get_perimeter() << endl;
  
}
	  
						
      
