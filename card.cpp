#include<exception>
#include<iostream>
#include<cstdlib>
#include<stdexcept>
#include<sstream>
#include<string>

#ifndef CARD
#define CARD
#endif // CARD

using namespace std;

enum Suit {U,T,A};
typedef int Rank;


class Card
{
private:
  Suit _suit;
  Rank _rank;
  int suit_max=3;
  int rank_max=10;

public:
  Card(Suit suit, Rank rank)
  {
    _suit=suit;
    _rank=rank;
    //need to put error messages here
    if(((_suit==U)||(_suit==T)||(_suit==A)))             // (((_suit == U) || (_suit == T) || (_suit == A)) && (rank >=0 && rank <=9)) // check separately
      {
	//inputs are ok
      }
    else
      {
	throw runtime_error("Invalid Suit");
      }

	if (rank >=0 && rank <=9)
	  {
	    //inputs are fine
	  }
	else
	  {
	    throw runtime_error("Invalid Rank");
	  }

  }
  Card() {
    //Suit(rand() % (suit_max));//_suit
    _suit=static_cast<Suit>(rand()%suit_max);
    _rank =  rand() % (rank_max);//_rank
  }

  Suit suit()
  {
    return _suit;
  }

  Rank rank()
  {
    return _rank;
  }

  /*string card_to_string()
  {

    string returnVal;
    if (_suit == U) //_suit
      returnVal = "U";
      else if (_suit == T) //_suit
      returnVal  = "T";
    else
      returnVal = "A";

    returnVal += string(_rank); //_rank

    return returnVal;
      }

/*

/*string CardtoString()const{

  string description = "";

  switch(suit) {
	case U:
		description += "U";
		break;
	case T:
		description += "T";
		break;
        case A:
		description += "A";
		break;

  }

  description += " of ";

  switch(rank) {
	case 0:
		description += "0";
		break;
	case 1:
                description += "1";
		break;
	case 2:
		description += "2";
		break;
	case 3:
                description += "3";
		break;

		case 4:
		description += "4";
		break;
	case 5:
                description += "5";
		break;
	case 6:
		description += "6";
		break;
	case 7:
                description += "7";
		break;

		case 8:
		description += "8";
		break;
	case 9:
                description += "9";
		break;
  }
  return description;
}
*/

 string card_to_string(){
//string returnval = _suit + "" + _rank;
//return returnval;



string returnVal;
    if (_suit == U) //_suit
      returnVal = "U";
      else if (_suit == T) //_suit
      returnVal  = "T";
    else
      returnVal = "A";

      string rank=to_string(_rank);

//string str = ss.str();
    //returnVal += string(_rank); //_rank
    //string newval=returnVal + _rank;
   // string newval=returnVal + newrank;
    //cout<<"card is "+newval;
return returnVal+rank;

}



};
