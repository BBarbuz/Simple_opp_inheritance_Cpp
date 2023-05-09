#include <iostream>
#include "urzadzenieelektryczne.h"
#include "tv.h"

using namespace std;
int main() {
    UrzadzenieElektryczne u1("LG");
    u1.wypisz();
    u1.wlacz();
    u1.wypisz();
    cout << "Marka urzaczenia u1 = " << u1.jakaMarka()<<endl;
    cout << "Stan urzaczenia u1 = " << u1.jakiStan()<< endl;

    TV tv1("Samsung", true);
    tv1.wypisz();
    tv1.zmienKanal(50);
    tv1.podglosnij();
    tv1.wypisz();
    tv1.scisz();
    tv1.scisz();
    tv1.wypisz();
    tv1.wylacz();
    tv1.wypisz();

    TV tv2("Philips");
    tv2.wypisz();
    tv2.wlacz();
    tv2.wypisz();

    UrzadzenieElektryczne *u2;
    u2 = &tv2;
    u2->wypisz();
    u2->wylacz();

    return 0;
}
