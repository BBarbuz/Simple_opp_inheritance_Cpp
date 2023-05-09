#include "tv.h"

TV::TV(const string &m, bool s, unsigned short k, unsigned short g) : UrzadzenieElektryczne(m, s) {
    marka = m;
    stan = s;

    if(k >= 1 && k <= 40)
        kanal = k;
    else
        kanal = 1;

    if(g >= 0 && g <= 10)
        glosnosc = g;
    else
        glosnosc = 0;

}


void TV::podglosnij() {
    if(glosnosc >= 0 && glosnosc < 10)
        if(stan)
            glosnosc ++;
}

void TV::scisz() {
    if(glosnosc > 0 && glosnosc <= 10)
        if(stan)
            glosnosc --;
}

void TV::zmienKanal(unsigned short nowyKanal) {
    if(nowyKanal >= 1 && nowyKanal <= 40){
        if(!stan)
            wlacz();
        kanal = nowyKanal;
    }
}

void TV::wypisz() {
    if(stan)
        cout << marka << " jest wlaczony na kanale " << kanal << " (glosnosc " << glosnosc << " )" << endl;
    else
        cout << marka << " jest wylaczony" << endl;
}
