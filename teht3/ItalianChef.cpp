#include "ItalianChef.h"
#include <iostream>

ItalianChef::ItalianChef(const std::string& chefName, int waterAmount, int flourAmount)
    : Chef(chefName), water(waterAmount), flour(flourAmount) {
    std::cout << getName() << " konstruktori" << std::endl;
}

ItalianChef::~ItalianChef() {
    std::cout << getName() << " destruktori" << std::endl;
}

std::string ItalianChef::getName() const {
    return name;
}

void ItalianChef::makePasta() {
    std::cout << getName() << " is making pasta with " << water << " of water and "
              << flour << " of flour" << std::endl;
}

int ItalianChef::getWater() const {
    return water;
}

int ItalianChef::getFlour() const {
    return flour;
}
