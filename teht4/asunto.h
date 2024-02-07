#ifndef ASUNTO_H
#define ASUNTO_H

class Asunto {
public:
    // Attributes
    int asukasMaara;
    int neliot;

    // Constructor
    Asunto();

    // Methods
    void maarita(int asukas, int neliot_);
    double laskeKulutus(double kulutus);
};

#endif
