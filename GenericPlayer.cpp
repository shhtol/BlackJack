#include <string>
#include <iostream>
using namespace std;

class GenericPlayer : public Hand{
    private:
    string name;
    
    public:
    GenericPlayer(string n) : name(n){}
    void IsHitting() virtual = 0;
    bool IsBoosted() const{
        return (GetTotal() > 21);
    }
    void Bust () const{
        if(IsBoosted()) cout << name << ": Boosted!" << endl; 
    }
    
    friend ostream& operator<<(ostream& os, const GenericPlayer& g){
        os << g.m_Name « ":\t";
        vector<Card*>::const_iterator pCard;
        if (!g.m_Саrds.empty())
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
