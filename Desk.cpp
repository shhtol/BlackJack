class Desk : public Hand {
    public:
    void Populate() {
        Clear();
        for(int s = Card::Hearts; s != Card::Clubs; s++){
            for(int r = Card::Ace; r != Card::King; r++){
                Add(new Card(static_cast<Card::rank>(r), static_cast<Card::suit>(s)));
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
    
    void Deal (Hand& aHand) {
        aHand.Add(m_Cards.back());
        m_Cards.pop_back();
    }
    
    void AdditionalCards (GenericPlayer& aGenericPlayer){
        while (!(aGenericPlayer.IsBoosted()) && aGenericPlayer.IsHitting()) {
            Deal(aGenericPlayer);
            if (aGenericPlayer.IsBoosted()){aGenericPlayer.Bust();}
        }
    }
    
};
