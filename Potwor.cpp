#include <iostream>
#include <cstdlib>
#include "Potwor.h"
#include "Postac.h"

using namespace std;

void Potwor::load() //metoda wczytująca dane potworka
{
    cout << "Czy chcesz wprowadzić Atrybuty Potwora(t/n)?";
    cin >> odp;
    if (odp == 't' || odp == 'T') {
        cout << "\nPodaj "<<Italic_cyan<<"Nazwe Potwora"<<white<<":";
        cin >> nazwa;
        cout << "Podaj "<<yellow<<"Sile "<<white<< nazwa << "'a:";
        cin >> sila;
        cout << "Podaj "<<purple<<"Wytrzymalosc "<<white<< nazwa << "'a:";
        cin >> wytrzymalosc;
        cout << "Podaj Ilosc "<<red<<"Zdrowia "<<white<< nazwa << "'a:";
        cin >> zdrowie;
        cout << "Podaj "<<green<<"Zrecznosc "<<white<< nazwa << "'a:";
        cin >> zrecznosc;
        cout << "Podaj "<<blue<<"Inteligencje "<<white<< nazwa << "'a:";
        cin >> inteligencja;
        cout << "\n";
    }
}
void Potwor::show() //metoda ukazująca dane potworka
{
    system("clear");
    cout <<Italic_cyan<<"Nazwa Potwora"<<white<<":" << nazwa <<endl
         <<yellow<< "Sila" <<white<<":"<< sila << endl
         <<purple<<"Wytrzymalosc"<<white<<":" << wytrzymalosc << endl
         <<red<<"Zdrowie"<<white<<":"<< zdrowie << endl
         <<green<<"Zrecznosc"<<white<<":"<< zrecznosc << endl
         <<blue<<"Inteligencja"<<white<<":" << inteligencja << endl;
    np = nazwa;
    wynik = sila + wytrzymalosc + zrecznosc + inteligencja / zdrowie;
}

void Potwor::respawn() //metoda do respawnu potworkow ver.Pre-Alpha
{

    cout << "\nIle chcesz tych Potworów?" << endl;
    cin >> x;
    cout << "++++++++++++++++++++++++++++++++++++++++++\n";
    for (y = 1; y <= x; y++) {
        cout << "+  " << y << " " << nazwa << "                              +" << endl;
    } //koniec fora
    cout << "++++++++++++++++++++++++++++++++++++++++++\n";
} //koniec voida

Potwor::Potwor(string n, int s, int w, float zdr, int zr, int intel) //konstruktor
{
    nazwa = n;
    sila = s;
    wytrzymalosc = w;
    zdrowie = zdr;
    zrecznosc = zr;
    inteligencja = intel;
}
Potwor::~Potwor() //destruktor
{
    cout << "\nMozna dzialac na nowo :D" << endl;
}

int Potwor::getScore() const //funkcja zwracająca wartość całkowitą czyli "int"
{
    return wynik;
}

string Potwor::getName() const //funkcja zwracająca nazwe czyli "string"
{
    return nazwa;
}
