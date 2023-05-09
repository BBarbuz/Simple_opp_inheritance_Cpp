#ifndef URZADZENIEELEKTRYCZNE_TV_H
#define URZADZENIEELEKTRYCZNE_TV_H

#include "urzadzenieelektryczne.h"

class TV: public UrzadzenieElektryczne {
private:
    unsigned short int kanal;
    unsigned short int glosnosc;

public:

    TV(const string &m, bool s = false, unsigned short kanal = 1, unsigned short glosnosc = 0);

    void podglosnij();

    void scisz();

    void zmienKanal(unsigned short nowyKanal);

    void wypisz();
};


#endif
