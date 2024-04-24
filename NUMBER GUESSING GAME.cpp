#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(nullptr));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    // Ask the user to guess the number
    cout << "I'm thinking of a number between 1 and 100. Can you guess what it is?" << endl;

    // Keep track of the number of guesses
    int numGuesses = 0;

    while (true) {
        int guess;
        cout << "Enter your guess: ";
        cin >> guess;
        numGuesses++;

        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the number " << secretNumber << " correctly!" << endl;
            cout << "It took you " << numGuesses << " guesses." << endl;
            break;
        }
    }

    return 0;
}

