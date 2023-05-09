#ifndef URZADZENIEELEKTRYCZNE_URZADZENIEELEKTRYCZNE_H
#define URZADZENIEELEKTRYCZNE_URZADZENIEELEKTRYCZNE_H

#include <iostream>

using namespace std;

class UrzadzenieElektryczne {
protected:
    string marka;
    bool stan;

public:
    UrzadzenieElektryczne(string m, bool s = false);

    void wlacz();

    void wylacz();

    string jakaMarka() const;

    bool jakiStan() const;

    void wypisz() const;
};


#endif
