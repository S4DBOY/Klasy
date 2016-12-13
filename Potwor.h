#include <iostream>
#include "Character.h"

class Potwor : public Character {
public:
    Potwor(std::string = "Potwor", int = 5, int = 5, float = 100, int = 5, int = 5); //konstruktor i wartosci domyslne tego konstruktora
    ~Potwor(); //destruktor


    void load();
    void show();
    void respawn();
    int getScore() const;
    std::string getName() const;
};
