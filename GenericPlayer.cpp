class GenericPlayer : public Hand{
    protected:
    string name;
    
    public:
    GenericPlayer(string n) : name(n){}
    virtual bool IsHitting() const = 0;
    bool IsBoosted() const{
        return (GetTotal() > 21);
    }
    void Bust () const{
        if(IsBoosted()) cout << name << ": Boosted!" << endl; 
    }
    
    friend ostream& operator<<(ostream& os, const GenericPlayer& g){
        os << g.name << ":\t";
        vector<Card*>::const_iterator pCard;
        if (!g.m_Cards.empty())
        {
            for (pCard = g.m_Cards.begin(); pCard != g.m_Cards.end(); pCard++) {
            os << *(*pCard) << "\t";
            }
          if (g.GetTotal() != 0) {
          cout << g.GetTotal() << endl;
          }
        }
         else
         {
             os << "Empty" << endl;
         }
        return os;
    }


};
