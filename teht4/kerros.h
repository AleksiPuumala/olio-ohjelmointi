// Kerros.h
#ifndef KERROS_H
#define KERROS_H

#include "Asunto.h"

class Kerros {
public:
    // Attributes
    Asunto as1;
    Asunto as2;
    Asunto as3;
    Asunto as4;

    // Constructor
    Kerros();

    double laskeKulutus(double hinta);
    void maaritaAsunnot();
};

#endif
