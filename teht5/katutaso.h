#ifndef KATUTASO_H
#define KATUTASO_H

#include "Kerros.h"

class Katutaso : public Kerros {
public:
    Katutaso();

    void maaritaAsunnot();
    double laskeKulutus(double hinta);

private:
    Asunto* as1;
    Asunto* as2;
};

#endif
