#ifndef KERROS_H
#define KERROS_H

#include "Asunto.h"

class Kerros {
public:
    Kerros();

    double laskeKulutus(double hinta);
    void maaritaAsunnot();

private:
    Asunto* as1;
    Asunto* as2;
    Asunto* as3;
    Asunto* as4;
};

#endif
