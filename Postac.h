#include <iostream>


class Postac : public Character {

public:
    Postac(std::string = "Mr.Nobody", int = 5, int = 5, float = 100, int = 5, int = 5); //konstruktor i wartosci domyslne tego konstruktora
    ~Postac(); //destruktor

    void load();
    void show();
    void porownaj(const Potwor& monster); //drugie slowo nie jest wazne moze byc byle co ale lepiej by było intuicyjne
};


