#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Game {
private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;

public:
    Game(int maxNum) : maxNumber(maxNum), numOfGuesses(0) {
         cout << "GAME CONSTRUCTOR: object initialized with " << maxNumber << " as a maximum value" << endl;
        srand(int(time(0)));
        randomNumber = 1 + std::rand() % maxNumber;
    }

    ~Game() {
         cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
    }

    void play() {
        do {
            cout << "Arvaa luku 1-" << maxNumber << ":" << endl;
            cin >> playerGuess;
            numOfGuesses++;

            if (playerGuess < randomNumber) {
                cout << "luku on suurempi" << endl;
            } else if (playerGuess > randomNumber) {
                cout << "luku on pienempi" << endl;
            } else {
                cout << "oikea vastaus!" << endl;
            }
        } while (playerGuess != randomNumber);
         printGameResult();
    }

    void printGameResult() {
        cout << "Arvausten maara: " << numOfGuesses << endl;
        cout << "Oikea vastaus oli: " << randomNumber << endl;
        cout << "Peli ohi!" << endl;
    }
};
