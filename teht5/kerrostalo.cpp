#include "Kerrostalo.h"
#include <iostream>

Kerrostalo::Kerrostalo() {
    eka = new Katutaso();
    toka = new Kerros();
    kolmas = new Kerros();
    std::cout << "Kerrostalo luotu" << std::endl;
    std::cout << "Maaritetaan koko kerrostalon asunnot" << std::endl;
}

double Kerrostalo::laskeKulutus(double hinta) {
    double kokonaiskulutus = eka->laskeKulutus(hinta) +
                             toka->laskeKulutus(hinta) +
                             kolmas->laskeKulutus(hinta);
    return kokonaiskulutus;
}
