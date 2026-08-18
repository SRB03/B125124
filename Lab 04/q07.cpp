#include <iostream>
using namespace std;

class Player {
    string name;
    int health;
    int score;
    int level;
public:
    Player() {
        cout << "Enter Player Name: ";
        cin >> name;
        cout << "Enter Health: ";
        cin >> health;
        cout << "Enter Score: ";
        cin >> score;
        cout << "Enter Level: ";
        cin >> level;
    }

    friend class GameManager;
};

class GameManager {
public:
    void displayPlayerDetails(Player P) {
        cout << "\nPlayer Details: " << endl;
        cout << "Name  : " << P.name << endl;
        cout << "Health: " << P.health << endl;
        cout << "Score : " << P.score << endl;
        cout << "Level : " << P.level << endl;
    }

    void checkHealth(Player P) {
        if (P.health > 0)
            cout << "Status: Player is Alive" << endl;
        else
            cout << "Status: Player is Dead" << endl;
    }

    void displayLevelAndScore(Player P) {
        cout << "Current Level: " << P.level << " | Score: " << P.score << endl;
    }
};

int main() {
    Player *P = new Player();
    GameManager *GM = new GameManager();

    GM->displayPlayerDetails(*P);
    GM->checkHealth(*P);
    GM->displayLevelAndScore(*P);

    delete P;
    delete GM;
    return 0;
}