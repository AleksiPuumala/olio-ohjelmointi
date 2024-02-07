// Kerrostalo.cpp
#include "Kerrostalo.h"
#include <iostream>

Kerrostalo::Kerrostalo() {
    std::cout << "Kerrostalo luotu" << std::endl;
    std::cout << "Maaritetaan koko kerrostalon asunnot" << std::endl;
}

double Kerrostalo::laskeKulutus(double hinta) {
    double kokonaiskulutus = eka.laskeKulutus(hinta) +
                             toka.laskeKulutus(hinta) +
                             kolmas.laskeKulutus(hinta);
    return kokonaiskulutus;
}
