#ifndef ASUNTO_H
#define ASUNTO_H

class Asunto {
public:
    Asunto();

    ~Asunto();

    void maarita(int asukas, int neliot_);
    double laskeKulutus(double hinta);

private:
    int* asukasMaara;
    int* neliot;
};

#endif
