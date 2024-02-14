#include "Katutaso.h"
#include <iostream>

Katutaso::Katutaso() {
    as1 = new Asunto();
    as2 = new Asunto();
    std::cout << "Katutaso luotu" << std::endl;
}

void Katutaso::maaritaAsunnot() {
    std::cout << "Maaritetaan 2kpl asuntoja katutasolle" << std::endl;
    as1->maarita(2, 100);
    as2->maarita(2, 100);

    Kerros::maaritaAsunnot();
}

double Katutaso::laskeKulutus(double hinta) {
    double omien_asuntojen_kulutus = as1->laskeKulutus(hinta) + as2->laskeKulutus(hinta);

    double perittyjen_asuntojen_kulutus = Kerros::laskeKulutus(hinta);

    return omien_asuntojen_kulutus + perittyjen_asuntojen_kulutus;
}
