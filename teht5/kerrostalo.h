#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "Katutaso.h"
#include "Kerros.h"

class Kerrostalo {
public:
    Kerrostalo();

    double laskeKulutus(double hinta);

    Katutaso* eka;
    Kerros* toka;
    Kerros* kolmas;
};

#endif
