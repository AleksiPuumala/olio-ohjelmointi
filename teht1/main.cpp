#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxNum) {
    std::srand(int(std::time(0))); //satunnaisluvun alustus

    int satunnaisluku; //muuttuja satunnaisluvulle
    for (int i = 0; i < 5; ++i) {
        satunnaisluku = 1 + std::rand() % maxNum; //satunnaisluvun arpominen väliltä 1-20
    }

    int arvaus;//muuttuja käyttäjän arvaukselle
    int arvaustenMaara = 0;//muuttuja arvausten määrälle

    do { //do/while loop jotta ohjelma antaa uusia yrityksiä väärien arvausten jälkeen
        std::cout << "Arvaa luku 1-" << maxNum << ":" << std::endl; //pyydetään käyttäjää arvaamaan luku
        std::cin >> arvaus; //luetaan käyttäjän arvaus
        arvaustenMaara++; //arvausten määrä nousee joka arvauksella

        if (arvaus < satunnaisluku) { // reagoidaan käyttäjän arvauksiin
            std::cout << "luku on suurempi" << std::endl;
        }
        else if (arvaus > satunnaisluku) {
            std::cout << "luku on pienempi" << std::endl;
        }
        else {
            std::cout << "oikea vastaus!" << std::endl;
        }
    } while (arvaus != satunnaisluku);
}
int main() {
    int maxNum;

    std::cout << "Syota korkein etsittava luku: ";
    std::cin >> maxNum;

    int arvaustenMaara = game(maxNum);

    game(maxNum); // Kutsutaan funktiota pelin pelaamiseksi

    return 0;
}
