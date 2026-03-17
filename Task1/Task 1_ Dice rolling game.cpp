#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	cout<< "\n===DICE ROLLING GAME===\n\n";
    char choice;

    srand(time(0)); // Seed for random numbers

    do {
        int dice1 = rand() % 6 + 1;
        int dice2 = rand() % 6 + 1;

        cout << "Dice 1: " << dice1 << endl;
        cout << "Dice 2: " << dice2 << endl;
        cout << "Total: " << dice1 + dice2 << endl;

        cout << "\nRoll again? (y/n): ";
        cin >> choice;

    } while(choice == 'y' || choice == 'Y');

    cout << "\nThanks for playing!" << endl;

    return 0;
}
