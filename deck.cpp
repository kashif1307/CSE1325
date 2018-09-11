
#include "card.cpp"
#include <vector>
#include <iostream>
#include <exception>

using namespace std;

class Deck {
private:
  vector<Card> _deck;


public:
  Deck(int number=10)
  {
    for (int i=0;i<number; i++)
      {
	_deck.push_back(Card());
      }
  }

  class Deck_empty: public exception {

  public:
    const char*what() const noexcept
    {
      return "Deck is empty";
    }
  };

   Card deal()
  {
    // if(!_deck.empty())
    if(_deck.size()==0)
      {
	throw Deck_empty{};
      }
      
	Card card= _deck.back();
	_deck.pop_back();

	return card;
  
   
  }
};

// Deck deck(4)
// Deck deck()
