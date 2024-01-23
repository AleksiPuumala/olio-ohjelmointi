#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxNum) {
    srand(int(time(0))); //satunnaisluvun alustus

    int satunnaisluku; //muuttuja satunnaisluvulle
    for (int i = 0; i < 5; ++i) {
        satunnaisluku = 1 + std::rand() % maxNum; //satunnaisluvun arpominen väliltä 1-20
    }

    int arvaus;//muuttuja käyttäjän arvaukselle
    int arvaustenMaara = 0;//muuttuja arvausten määrälle

    do { //do/while loop jotta ohjelma antaa uusia yrityksiä väärien arvausten jälkeen
        cout << "Arvaa luku 1-" << maxNum << ":" << endl; //pyydetään käyttäjää arvaamaan luku
        cin >> arvaus; //luetaan käyttäjän arvaus
        arvaustenMaara++; //arvausten määrä nousee joka arvauksella

        if (arvaus < satunnaisluku) { // reagoidaan käyttäjän arvauksiin
            cout << "luku on suurempi" << endl;
        }
        else if (arvaus > satunnaisluku) {
            cout << "luku on pienempi" << endl;
        }
        else {
            cout << "oikea vastaus!" << endl;
        }
    } while (arvaus != satunnaisluku);
}
int main() {
    int maxNum;

    cout << "Syota korkein etsittava luku: ";
    cin >> maxNum;

    int arvaustenMaara = game(maxNum);
    cout<< "Arvausten maara: " << arvaustenMaara << endl;

    return 0;
}
