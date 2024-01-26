#ifndef CHEF_H
#define CHEF_H

#include <string>

class Chef {
public:
    std::string name;
    Chef(const std::string& chefName);
    virtual ~Chef();

    void makeSalad();
    void makeSoup();
};

#endif // CHEF_H
