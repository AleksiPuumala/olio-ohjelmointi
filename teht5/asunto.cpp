#include <iostream>
#include "Asunto.h"

Asunto::Asunto() {
    asukasMaara = new int(0);
    neliot = new int(0);
    std::cout << "Asunto luotu" << std::endl;
}

Asunto::~Asunto() {
    delete asukasMaara;
    delete neliot;
    std::cout << "Asunto tuhottu" << std::endl;
}

void Asunto::maarita(int asukas, int neliot_) {
    *asukasMaara = asukas;
    *neliot = neliot_;
    std::cout << "Asunto maaritetty asukkaita=" << asukas << " nelioita=" << neliot_ << std::endl;
}

double Asunto::laskeKulutus(double hinta) {
    double kulutus = hinta * (*neliot) * (*asukasMaara);
    return kulutus;
}
