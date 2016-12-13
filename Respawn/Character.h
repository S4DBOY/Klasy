class Character //klasa z ktorej dziedzicza klasy Postac i Potwor !
    {
protected:
    std::string nazwa, np, nP; //nazwa <-ogólna potwora,bądź postaci która po tej klasie dziedziczy, np<-nazwa potworka gdyż nie wiem jak wczytać ją z metody load() do metody porownaj() nP<-nazwa postaci też z tych samych pobudek;
    int x, y;
    int sila;
    int wytrzymalosc;
    float zdrowie;
    int inteligencja, zrecznosc;
    char odp;
    int wynik1, wynik; //wartości do porównywania kto by wygrał gdyby doszło do ewentualnego pojedynku
    const std::string white  = "\033[0m";
    const std::string red    = "\033[91m";
    const std::string green  = "\033[32m";
    const std::string yellow = "\033[93m";
    const std::string blue  = "\033[94m";
    const std::string purple = "\033[95m";
    const std::string Italic_cyan = "\033[3;96m";


public:
    virtual void load() = 0;
    virtual void show() = 0;
};
