#include <iostream>

using namespace std;

class Card {
    
    public:
    enum  rank {
        Ace = 1,
        two,
        three,
        four,
        five,
        six,
        seven,
        eight,
        nine,
        ten = 10,
        Jack = 10,
        Queen = 10,
        King = 10};
        
    enum suit {Hearts, Diamonds, Spade, Clubs}; 
    
    Card(rank r, suit s, bool ifu) : m_Rank(r), Suit(s), m_IsFaceUp(ifu){}
    
    void Flip() {
        m_IsFaceUp = !m_IsFaceUp;
        
    }
   
    int GetValue() const{
        int value = 0;
        if(m_IsFaceUp) {
            value = m_Rank;
        }
       return value;
}
    
    private:
    bool m_IsFaceUp;
    rank m_Rank;
    suit Suit ;   
};
