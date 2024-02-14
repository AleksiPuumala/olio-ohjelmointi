#include "Kerros.h"
#include <iostream>

Kerros::Kerros() {
    as1 = new Asunto();
    as2 = new Asunto();
    as3 = new Asunto();
    as4 = new Asunto();
    std::cout << "Kerros luotu" << std::endl;
}

double Kerros::laskeKulutus(double hinta) {
    double kokonaiskulutus = as1->laskeKulutus(hinta) + as2->laskeKulutus(hinta) +
                             as3->laskeKulutus(hinta) + as4->laskeKulutus(hinta);
    return kokonaiskulutus;
}

void Kerros::maaritaAsunnot() {
    std::cout << "Maaritetaan 4kpl asuntoja kerrokselle" << std::endl;
    as1->maarita(2, 100);
    as2->maarita(2, 100);
    as3->maarita(2, 100);
    as4->maarita(2, 100);
}
