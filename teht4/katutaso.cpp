// Katutaso.cpp
#include "Katutaso.h"
#include <iostream>

Katutaso::Katutaso() {
    as1 = Asunto();
    as2 = Asunto();
    std::cout << "Katutaso luotu" << std::endl;
}

void Katutaso::maaritaAsunnot() {
    std::cout << "Maaritetaan 2kpl asuntoja katutasolle" << std::endl;
    // Määritetään 2 omaa asuntoa katutasolle
    as1.maarita(2, 100);
    as2.maarita(2, 100);

    // Määritetään 4 perittyä asuntoa kerrokselta
    Kerros::maaritaAsunnot();
}

double Katutaso::laskeKulutus(double hinta) {
    // Lasketaan omien asuntojen kulutus
    double omien_asuntojen_kulutus = as1.laskeKulutus(hinta) + as2.laskeKulutus(hinta);

    // Lasketaan perittyjen asuntojen kulutus
    double perittyjen_asuntojen_kulutus = Kerros::laskeKulutus(hinta);

    // Palautetaan kokonaiskulutus
    return omien_asuntojen_kulutus + perittyjen_asuntojen_kulutus;
}
