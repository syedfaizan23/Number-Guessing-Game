#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string playAgain;
    do {
        srand(time(0)); 
        int secretNumber = rand() % 100 + 1;
        int userGuess;

        cout << "Hey! Let's play a game. Press any key to continue.\n";
        getch();
        cout << "I have a number (1-100) in my memory. You have to guess that number. Okay!" << endl;
        
        while (true) 
		{
            cout << "Enter the number you guess: ";
            cin >> userGuess;

            if (userGuess > secretNumber + 5) {
                cout << "Too high! Try again." << endl;
            } else if (userGuess < secretNumber - 5) {
                cout << "Too low! Try again." << endl;
            } else if (userGuess > secretNumber && userGuess <= secretNumber + 5) {
                cout << "Almost there! Just a bit lower." << endl;
            } else if (userGuess < secretNumber && userGuess >= secretNumber - 5) {
                cout << "Almost there! Just a bit higher." << endl;
            } else {
                cout << "Congratulations! You guessed the correct number." << endl;
                break;
            }
        }

        cout << "\nDo you want to play again? (yes/no): ";
        cin >> playAgain;
        
    } while (playAgain == "yes" || playAgain == "Yes");

    cout << "Thank you for playing! Goodbye!" << endl;
    getch();
    return 0;
} 

