// Kerrostalo.h
#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "Katutaso.h"

class Kerrostalo {
public:
    // Attributes
    Katutaso eka;
    Kerros toka;
    Kerros kolmas;

    // Constructor
    Kerrostalo();

    double laskeKulutus(double hinta);
};

#endif
