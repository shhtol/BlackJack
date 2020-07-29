
using namespace std;

class House : public GenericPlayer {
    public:
    House (const string& name) : GenericPlayer(name) {}
    bool IsHitting() const {
        if(GetTotal() < 16) return true;
        return false;
    }
    void FlipFirstCard() {
        if ( !(m_Cards.empty()))
        { 
            m_Cards[0]->Flip();
        }
    }
};
