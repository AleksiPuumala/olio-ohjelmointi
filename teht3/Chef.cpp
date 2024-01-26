#include "Chef.h"
#include <iostream>

Chef::Chef(const std::string& chefName) : name(chefName) {
    std::cout << name << " konstruktori" << std::endl;
}

Chef::~Chef() {
    std::cout << name << " destruktori" << std::endl;
}

void Chef::makeSalad() {
    std::cout << name << " is making a salad." << std::endl;
}

void Chef::makeSoup() {
    std::cout << name << " is making soup." << std::endl;
}
