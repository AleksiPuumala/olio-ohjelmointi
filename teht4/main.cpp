// Main.cpp
#include <iostream>
#include "Kerrostalo.h"

int main() {
    Kerrostalo talo;

    // Maaritä asunnot kullekin tasolle
    talo.eka.maaritaAsunnot();
    talo.toka.maaritaAsunnot();
    talo.kolmas.maaritaAsunnot();

    // Laske ja tulosta koko rakennuksen kokonaiskulutus
    double hinta = 1; // Yksikköhinta
    double kokonaiskulutus = talo.laskeKulutus(hinta);
    std::cout << "Kerrostalon kokonaiskulutus, kun hinta=" << hinta << " on " << kokonaiskulutus << std::endl;

    return 0;
}
