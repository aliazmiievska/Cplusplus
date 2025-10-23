#include <iostream>
#include <ctime>
using namespace std;

int getRand();
bool isContinueOrNot(char enter);

int main()
{
    char continueOrNot = ' ';

    do {
        cout << "Let's play a game. I'm thinking of a number between 0 and 100. You have 7 tries to guess what it is.\n";
        int win = getRand();

        int aGuess;
        int kkk = 1;

        do {
            if (kkk == 8) {
                cout << "Sorry, you lose. The correct number was " << win << ".\n";
                break;
            }
            cout << "Guess #" << kkk << ": ";
            cin >> aGuess;

            if (aGuess > win) cout << "Your guess is too high.\n";
            if (aGuess < win) cout << "Your guess is too low.\n";

            ++kkk;
        } while (aGuess != win);

        if (aGuess == win) {
            cout << "Correct! You win!\n";
        }

        cout << "Would you like to play again (y/n)?\n";
        while (!isContinueOrNot(continueOrNot)) {
            cin >> continueOrNot;
        }

    } while (continueOrNot == 'y');

    if (continueOrNot == 'n') cout << "Thank you for playing." << endl;

    return 0;
}

int getRand() {
    srand(time(0));

    return rand() % 101;
}

bool isContinueOrNot(char enter) {
    return enter == 'n' || enter == 'y';
}