#include <iostream>

using namespace std;

enum  rank {
        Ace,
        two,
        three,
        four,
        five,
        six,
        seven,
        eight,
        nine,
        ten,
        Jack,
        Queen,
        King };
        
enum suit {Hearts, Diamonds, Spade, Clubs};

class Card {
    
    public: 
    Card () {
        m_IsFaceUp = false;
    }
    bool Flip() {
        m_IsFaceUp = !m_IsFaceUp;
        return m_IsFaceUp;
    }
   
    int GetValue(Nominal n) {
        switch (n) {
      case Ace:   return 1;
      case two:   return 2; 
      case three: return 3; 
      case four:  return 4; 
      case five:  return 5; 
      case six:   return 6; 
      case seven: return 7; 
      case eight: return 8; 
      case nine:  return 9; 
      case ten:
      case Jack:
      case Queen: 
      case King: return 10;
     }
}
    
    private:
    bool m_IsFaceUp;
    rank m_Rank;
    suit Suit ;   
};

int main()
{   Card c;
    
    cout <<  c.Flip() << endl;
    cout << c.GetValue(two) << endl;
    cout << c.GetValue(Jack) << endl;
    return 0;
}
