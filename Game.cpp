class Game {
    private:
    vector <Player> players;
    Desk desk;
    House house;
    public:
    Game(vector<string>& names) {
    vector<string>::const_iterator pName;
         for (pName = names.begin(); pName != names.end(); pName++)
            {
                    players.push_back(Player(*pName));
            }

        srand(static_cast<unsigned int>(time(0)));
        desk.Populate();
        desk.Shuffle();
    }
    
    void Plау()
    {
       vector<Player>::iterator pPlayer;
        for (int i = 0; i < 2; i++)
            {
                   for (pPlayer = players.begin(); pPlayer != players.end(); pPlayer++)
                    {
                        desk.Deal(*pPlayer);
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
                desk.AdditionalCards(*pPlayer);
            }

        house.FlipFirstCard();
        cout << endl;
        cout << house << endl;
        desk.AdditionalCards(house);
        if (house.IsBoosted())
                {
                  for (pPlayer = players.begin(); pPlayer != players.end(); pPlayer++){
                     if (!(pPlayer->IsBoosted()))
                       {
                             pPlayer->Win();   
                       }
                  }
        }else{
                for (pPlayer = players.begin(); pPlayer != players.end(); pPlayer++)
                    {
                        if (!(pPlayer->IsBoosted()))
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
                pPlayer->Clear();
            }
        house.Clear();
    }

    
};

