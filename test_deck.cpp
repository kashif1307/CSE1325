#include<exception>
#include<cstdlib>
#include<stdexcept>
#include <iostream>
#include "deck.cpp"
#include<vector>

using namespace std;

void normative_case()
{

  Deck deck;
  Card card;
  
  try
    {
      card=deck.deal();
    }
  catch(exception& e)
	{
	  cerr<<"Deck has not been dealt!!"<<endl; 
	}
}

void parametric_case (int cards)
{

Deck deck {cards};
Card card;
try
  {

    card= deck.deal();
  }
 catch(exception& e)
   {
     cerr<< "Card not dealt"<< endl;
   }
}


void failure_case()
{
  Card card;
  Deck deck;

  try{
    for(int i=0;i<11;i++)
      {
	  card=deck.deal();
	}
  }
    catch(exception &e)
      {
	cerr<<"card not dealt"<<endl;
      }
  }




  


int main()
{

  
  normative_case();
  parametric_case(20);
  failure_case();




  return 0;
}


