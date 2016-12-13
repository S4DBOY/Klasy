///modyfikacje: Wprowadzenie LVLi oraz losowanie potwora z którym się zmierzymy
#include <iostream>
#include <cstdlib>
#include "Potwor.h"
#include "Postac.h"
using namespace std;

void Postac::load() //metoda wczytujaca dane postaci
{
    cout << "Czy chcesz wprowadzić Atrybuty Postaci(t/n)?";
    cin >> odp;
    if (odp == 't' || odp == 'T') {
        cout << "\nPodaj "<<Italic_cyan<<"Nazwe Postaci"<<white<<":";
        cin >> nazwa;
        cout << "Podaj "<<yellow<<"Sile "<<white<< nazwa << "'a:";
        cin >> sila;
        cout << "Podaj "<<purple<<"Wytrzymalosc "<<white<< nazwa << "'a:";
        cin >> wytrzymalosc;
        cout << "Podaj Ilosc "<<red<<"Zdrowia "<<white << nazwa << "'a:";
        cin >> zdrowie;
        cout << "Podaj "<<green<<"Zrecznosc "<<white<< nazwa << "'a:";
        cin >> zrecznosc;
        cout << "Podaj "<<blue<<"Inteligencje "<<white<< nazwa << "'a:";
        cin >> inteligencja;
        cout << "\n";
    }
}
void Postac::show() //metoda ukazująca dane postaci
{
    system("clear");
    cout <<Italic_cyan<<"Nazwa Postaci"<<white<<":" << nazwa << endl
         <<yellow<<"Sila"<<white<<":" << sila << endl
         <<purple<<"Wytrzymalosc"<<white<<":" << wytrzymalosc << endl
         <<red<<"Zdrowie"<<white<<":" << zdrowie << endl
         <<green<<"Zrecznosc"<<white<<":" << zrecznosc << endl
         <<blue<<"Inteligencja"<<white<<":" << inteligencja << endl;
    nP = nazwa;
    wynik1 = sila + wytrzymalosc + zrecznosc + inteligencja / zdrowie;
}

Postac::Postac(string n, int s, int w, float zdr, int zr, int intel) //konstruktor klasy Postac
{
    nazwa = n;
    sila = s;
    wytrzymalosc = w;
    zdrowie = zdr;
    zrecznosc = zr;
    inteligencja = intel;
}
Postac::~Postac() //destruktor klasy Postac
{
    cout << "\nJezeli widzisz ten komunikat to znaczy,ze twoj komputer zniknie za…1…2…3 BOOM!" << endl;
}


void Postac::porownaj(const Potwor& monster)
{
    if (wynik1 > monster.getScore())

        cout << monster.getName() << " Przegralby z " << nP;

    if (wynik1 < monster.getScore())

        cout << monster.getName() << " Wygralby z " << nP;

    if (wynik1 == monster.getScore())

        cout << "Bylby remis";
}
