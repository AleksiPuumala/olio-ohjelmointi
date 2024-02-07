#include <iostream>
#include "Asunto.h"

Asunto::Asunto() {
    std::cout << "Asunto luotu" << std::endl;
}

void Asunto::maarita(int asukas, int neliot_) {
    asukasMaara = asukas;
    neliot = neliot_;
    std::cout << "Asunto maaritetty asukkaita=" << asukas << " nelioita=" << neliot_ << std::endl;
}

double Asunto::laskeKulutus(double hinta) {
    double kulutus = hinta * neliot * asukasMaara;
    return kulutus;
}
