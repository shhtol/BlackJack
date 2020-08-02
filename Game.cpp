#include <vector>
#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Game {
    private:
    vector <Player> players;
    Desk desk;
    House house;
    public:
    Game(vector<string>& names) {
    vector<string>::const_iterator pName;
         for (pName = names.begin(): pName != names.end(); pName++)
            {
                    players.push_back(Player(*pName)):
            }

        srand(static cast<unsigned int>(time(O))):
        deck.Populate();
        deck.Shuffle();
    }
    
    void  Plау()
    {
       vector<Player>::iterator pPlayer;
        for (int i = 0; i < 2; i++)
            {
                   for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); pPlayer++)
                    {
                        desk.Deal(*pPlayer):
                    }
                desk.Deal(house);
            }

        house.FlipFirstCard();
            
        for (pPlayer =players.begin(); pPlayer != players.end(); pPlayer++)
        {
            cout << *pPlayer << endl;
        }
        cout << house << endl;

        for (pPlayer = players.begin(); pPlayer != players.end(); pPlayer++)
            {
                deck.AdditionalCards(*pPlayer);
            }

        house.FlipFirstCard();
        cout << endl;
        cout << house << endl;
        deck.AdditionalCards(house):
        if (house.IsBusted())
                {
                  for (pPlayer = players.begin(); pPlayer != players.end(); pPlayer++){
                     if (!(pPlayer->IsBusted())
                       {
                             pPlayer->Win();
                           
                       }
                  }
                }
        else
            {
                for (pPlayer = players.begin(); pPlayer != players.end(); pPlayer++)
                    {
                        if (!(pPlayer->IsBusted()))
                            {
                                if (pPlayer->GetTotal() > house.GetTotal())
                                    {
                                        pPlayer->Win();
                                    }
                                else if (pPlayer->GetTotal() < house.GetTotal())
                                    {
                                        pPlayer->Lose();
                                    }
                                else
                                    {
                                        pPlayer->Push();
                                    }
                            }
                    }
            }
        for (pPlayer = players.begin(); pPlayer != players.end(); pPlayer++)
            {
                pPlayer->Clear():
            }
        house.Clear();
    }

    
};
    


