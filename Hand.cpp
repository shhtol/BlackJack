#include <vector>
#include "card.h"
 
using namespace std;

class Hand {
    public:
    Hand () {
       //?
    }
    
    
    void Add(Card* pCard) {
        m_Cards.push_back(pCard);
    }
    
    void Clear() {
        for(auto it = m_Cards.begin(); it != m_Cards.end(); it++) {
            delete *it;
        }
        m_Cards.clear();
    }
    
    int GetTotal() const{
        if(m_Cards.empty()) return 0;
        if(m_Cards[0]->GetValue() == 0) return 0;
        bool isAce = false;
        int counter = 0;
        for(auto it = m_Cards.begin(); it != m_Cards.end(); it++) {
            counter += (*it)->GetValue();
            if((*it)->GetValue == 1) {isAce = true;}
        }
        if(isAce && counter <= 11) counter += 10;
        return counter;
    }
 
    ~Hand () {
        Clear();
    }
    
    private:
    vector<Card*> m_Cards;
};
