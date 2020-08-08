class Player : public GenericPlayer {
    public:
    Player (const string& name = "") : GenericPlayer(name) {}
    bool IsHitting() const {
        bool b;
        cout << "One more card? 0 - no, 1 - yes" << endl;
        cin >> b;
        return b;
    }
    void Win() const {
        cout << name << " won!" << endl;
    }
    void Lose() const {
        cout << name << " lose!" << endl;
    }
    void Push() const {
        cout << name << " draw!" << endl;
    }
};
