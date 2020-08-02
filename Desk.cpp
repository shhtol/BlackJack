#include <algorithm>
using namespace std;

class Desk : public Hand {
    public:
    void Populate() {
        Clear();
        for(int s = Card::Hearts; int s != Card::Clubs; s++){
            for(int r = Card::Ace; int r != Card::King; r++){
                Add(new Card(static_cast<Card::suit>(s), static_cast<Card::rank>(r)));
            }
        }
    }
    Desk () {
        m_Cards.reserve(52);
        Populate();
    }
    void Shuffle() {
        random_shuffle(m_Cards.begin(), m_Cards.end());
    }
    
    vold Deal (Hand& aHand) {
        aHand.Add(m_Cards.back());
        m_Cards.pop_back();
    }
    
    void AddltionalCards (GenericPlayer& aGenerlcPlayer){
        while (!(aGenericPlayer.IsBusted()) && aGenericPlayer.IsHitting()) {
            Deal(aGenericPlayer);
            if (aGenericPlayer.IsBusted()){aGenericPlayer.Bust();}
        }
    }
    
};

