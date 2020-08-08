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
    
    Card(rank r, suit s, bool ifu = true) : m_Rank(r), Suit(s), m_IsFaceUp(ifu){}
    
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
    friend ostream& operator<<(ostream& os, const Card& c) {
        const string ranks[] = {"О", "А", "2", "З", "4", "5", "6", "7", "8", "9",
                "10", "J", "Q", "К"};
        const string suits [] = {"h", "d", "s", "c"};
        if (c.m_IsFaceUp)
            {
            os << ranks[c.m_Rank] << suits[c.Suit];
            }
        else
            {
            os << "ХХ";
            }
     return os;
    }
    
    private:
    bool m_IsFaceUp;
    rank m_Rank;
    suit Suit ;   
};
