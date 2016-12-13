#include <iostream>
#include "Potwor.h"
#include "Postac.h"

using namespace std;

int main()
{
Potwor mon;
mon.load();
mon.show();
mon.respawn();

Postac ch;
ch.load(); //metoda oddziedziczona po klasie Character
ch.show(); //metoda oddziedziczona po klasie Character

ch.porownaj(mon);
return 0;
}
