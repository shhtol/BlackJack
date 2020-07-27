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
    
};
