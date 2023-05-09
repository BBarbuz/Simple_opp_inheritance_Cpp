#include "urzadzenieelektryczne.h"

UrzadzenieElektryczne::UrzadzenieElektryczne(string m, bool s) {
    marka = m;
    stan = s;
}

void UrzadzenieElektryczne::wlacz() {
    stan = true;
}

void UrzadzenieElektryczne::wylacz() {
    stan = false;
}

string UrzadzenieElektryczne::jakaMarka() const {
    return marka;
}

bool UrzadzenieElektryczne::jakiStan() const {
    return stan;
}

void UrzadzenieElektryczne::wypisz() const {
    if (stan)
        cout << marka << " jest włączony"<<endl;
    else
        cout<< marka << " jest wyłączony"<<endl;
}
