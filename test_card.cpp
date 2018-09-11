#include "card.cpp"
#include<iostream>
#include<exception>
#include<cstdlib>
#include<stdexcept>

using namespace std;

void constructor_parameter_error()
{
    
      Card card(U,3);
      if (card.card_to_string()!= "U3")
     
      {
          cerr<<"Invalid suit or rank"<<endl;
      }
      
      
}

void invalid_suit(Suit suit, Rank rank)
{
  Card card {suit,rank};
 // Suit suit1;

 //suit1=suit;
 //if((card.suit()!=U)||(card.suit()!=T)||(card.suit()!=A))
 // {
  // throw runtime_error("invalid suit");

  //}

}


void invalid_rank(Suit suit, Rank rank)
{
  Card card {suit,rank};
  // Rank rank1;

  //  rank1=rank;
  // if((card.rank()<0)||(card.rank()>9))
  // {
  //  throw runtime_error("invalid rank");

  // }


}



int main()
{
	Card card0(U,0);
    Card card1(T,2);
    Card card2(U,3);
	Card card3(A,5);
	Card card4(T,7);
	Card card5(U,1);
	Card card6(T,3);
	Card card7(T,5);
	Card card8(U,0);
	Card card9(A,9);
	Card card10(A,2);
	Card card11(T,8);
	Card card12(A,1);
	Card card13(T,7);
	Card card14(U,4);
	Card card15(T,5);
	Card card16(A,6);
	Card card17(U,9);
	Card card18(A,8);
	Card card19(T,1);



        if (card0.card_to_string()!= "U0")
	{

        cerr<<"error message"<<endl;
	}
	else{
        cout<<"U0"<<endl;
	}


        if ((card1.card_to_string())!= "T2")
	{

	cerr<<"error message"<<endl;

	} // do for 20 cards
	else{
        cout<<"T2"<<endl;
	}


        if ((card2.card_to_string())!= "U3")
	{

	cerr<<"error message"<<endl;

	} // do for 20 cards
	else{
        cout<<"U3"<<endl;
	}


        if ((card3.card_to_string() )!= "A5")
	{

	cerr<<"error message"<<endl;

	} // do for 20 cards
	else{
        cout<<"A5"<<endl;
	}


        if ((card4.card_to_string() )!= "T7")
	{

	cerr<<"error message"<<endl;

	} // do for 20 cards
	else{
        cout<<"T7"<<endl;
	}


        if ((card5.card_to_string()) != "U1")
	{

cerr<<"error message"<<endl;

	} // do for 20 cards
else{
        cout<<"U1"<<endl;
	}

        if (card6.card_to_string() != "T3")
	{

	cerr<<"error message"<<endl;

	} // do for 20 cards

else{
        cout<<"T3"<<endl;
	}
        if (card7.card_to_string() != "T5")
	{

	cerr<<"error message"<<endl;

	} // do for 20 cards
else{
        cout<<"T5"<<endl;
	}

        if (card8.card_to_string() != "U0")
	{
	  cerr<<"error message"<<endl;

	} // do for 20 cards

else{
        cout<<"U0"<<endl;
	}
        if (card9.card_to_string() != "A9")
	{

cerr<<"error message"<<endl;

	} // do for 20 cards
else{
        cout<<"A9"<<endl;
	}

        if (card10.card_to_string()!= "A2")
	{

	cerr<<"error message"<<endl;

	} // do for 20 cards
else{
        cout<<"A2"<<endl;
	}

        if (card11.card_to_string()!= "T8")
	{

	cerr<<"error message"<<endl;

	} // do for 20 cards
else{
        cout<<"T8"<<endl;
	}

        if (card12.card_to_string()!= "A1")
	{

	cerr<<"error message"<<endl;

	} // do for 20 cards
else{
        cout<<"A1"<<endl;
	}

        if (card13.card_to_string()!= "T7")
	{

	cerr<<"error message"<<endl;

	} // do for 20 cards
else{
        cout<<"T7"<<endl;
	}

        if (card14.card_to_string()!= "U4")
	{

	cerr<<"error message"<<endl;

	} // do for 20 cards
else{
        cout<<"U4"<<endl;
	}

        if (card15.card_to_string()!= "T5")
	{

	cerr<<"error message"<<endl;

	} // do for 20 cards
else{
        cout<<"T5"<<endl;
	}

        if (card16.card_to_string()!= "A6")
	{

	cerr<<"error message"<<endl;

	} // do for 20 cards

else{
        cout<<"A6"<<endl;
	}
        if (card17.card_to_string()!= "U9")
	{

	cerr<<"error message"<<endl;

	} // do for 20 cards

else{
        cout<<"U9"<<endl;
	}
        if (card18.card_to_string()!= "A8")
	{

	cerr<<"error message"<<endl;

	} // do for 20 cards
else{
        cout<<"A8"<<endl;
	}

        if (card19.card_to_string()!= "T1")
	{

	cerr<<"error message"<<endl;

	} // do for 20 cards
else{
        cout<<"T1"<<endl;
	}
	
	constructor_parameter_error();
	invalid_suit((Suit)3,3);
	invalid_rank(U,12);
}








