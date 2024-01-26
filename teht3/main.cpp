#include "Chef.h"
#include "ItalianChef.h"

int main() {
    Chef regularChef("Chef Jyrki");
    regularChef.makeSalad();
    regularChef.makeSoup();

    ItalianChef italianChef("Chef Mario", 100, 250);
    italianChef.makeSalad();
    italianChef.makeSoup();
    italianChef.makePasta();

    return 0;
}
