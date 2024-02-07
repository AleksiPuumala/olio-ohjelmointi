// Katutaso.h
#ifndef KATUTASO_H
#define KATUTASO_H

#include "Kerros.h"

class Katutaso : public Kerros {
public:
    // Constructor
    Katutaso();

    void maaritaAsunnot();
    double laskeKulutus(double hinta);
};

#endif
