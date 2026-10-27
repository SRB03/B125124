#include <iostream>
using namespace std;

class Character {
public:
    virtual void attack() {
        cout << "Character performs a basic attack." << endl;
    }
};

class Warrior : public Character {
    int strength;
public:
    Warrior(int s) {
        strength = s;
    }

    void attack() override {
        int damage = 20 + (2 * strength);
        cout << "Warrior attacks with strength " << strength 
             << " Damage dealt: " << damage << endl;
    }
};

class Archer : public Character {
    int agility;
public:
    Archer(int a) {
        agility = a;
    }

    void attack() override {
        int damage = 15 + (3 * agility);
        cout << "Archer attacks with agility " << agility 
             << " Damage dealt: " << damage << endl;
    }
};

int main() {
    Warrior w(15);
    Archer a(12);

    w.attack();
    a.attack();

    return 0;
}
