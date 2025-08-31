#include <iostream>
#include <cstdlib>    // For rand()
#include <ctime>      // For time()
#include <limits>     // For numeric_limits

using namespace std;

int main() {
    srand(time(0)); 
    int number = rand() % 100 + 1;

    int guess;
    int attempts = 0;
    int invalidCount = 0;

    cout << "************************************************" << endl;
    cout << "      WELCOME TO THE NUMBER GUESSING GAME       " << endl;
    cout << "************************************************" << endl;
    cout << "                                                    Guess a number between 1 and 100.           " << endl;

    while (true) {
        cout << "\nEnter your guess: " << endl;

        if (!(cin >> guess)) {
            cout << "Invalid input! Please enter a whole number between 1 and 100." << endl << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            invalidCount++;

            if (invalidCount >= 5) {
                cout << "\nToo many invalid attempts." << endl;
				cout << "-----------------GAME OVER------------------" << endl;
                break;
            }
            continue;
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        attempts++;

        if (attempts > 15) 
		{
            cout << "You've reached the maximum number of guesses." << endl;
            cout << "##################GAME OVER##################" << endl;
            
            break;
        }

        if (guess < 1 || guess > 100) {
            cout << "Please enter a number within the range 1 to 100." << endl;
            invalidCount++;

            if (invalidCount >= 5) 
			{
                cout << "Too many invalid attempts. " << endl;
               cout << "~~~~~~~~~~~~~~~~~GAME OVER~~~~~~~~~~~~~~~~~" << endl;
                break;
            }
            continue;
        }

        if (guess < number) {
            cout << "Too low! Try again." << endl;
        } else if (guess > number) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
            cout << "****************************GAME OVER***********************************************"<<endl;
            break;
        }
    }

    return 0;
}

