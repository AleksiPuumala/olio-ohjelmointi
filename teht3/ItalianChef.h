#ifndef ITALIAN_CHEF_H
#define ITALIAN_CHEF_H

#include "Chef.h"

class ItalianChef : public Chef {
private:
    int water;  // vesi
    int flour;  // jauhot

public:
    ItalianChef(const std::string& chefName, int waterAmount, int flourAmount);
    ~ItalianChef();

    std::string getName() const;
    void makePasta();
    int getWater() const;
    int getFlour() const;
};

#endif // ITALIAN_CHEF_H
