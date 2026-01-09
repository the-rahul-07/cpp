#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <fstream>

using std ::cin;
using std ::cout;

int play_game()
{
    std::vector<int> vector;
    int random;
    // int count = 0;
    random = rand() % 101;
    cout << "Game is being played\n";
    // cout << random << "\n";

    cout << "Guess the number game!\n";
    cout << "Enter number : ";

    while (true)
    {
        int guess;
        cin >> guess;
        vector.push_back(guess);
        if (guess == random)
        {
            cout << "Guessed right, You won the game!\n";
            cout << "Your number of guesses are : " << vector.size() << "\n";
            cout << "Your Guessed numbers are :\n";
            for (int i = 0; i < vector.size(); i++)
            {
                cout << vector[i] << "\t";
            }
            cout << "\n";
            break;
        }
        else if (guess < random)
        {
            cout << "Too low\n";
            cout << "Guess again : ";
        }
        else if (guess > random)
        {
            cout << "Too high\n";
            cout << "Guess again : ";
        }
        // count++; // instead can use guess.size();
    }

    std::ifstream input("bestscore.txt");
    int bestscore;
    input >> bestscore;

    std::ofstream output("bestscore.txt");
    if (vector.size() < bestscore) // instead of count we can use guess.size()
    {
        output << vector.size();
    }
    else
    {
        output << bestscore;
    }
}
int main()
{
    srand(time(NULL));

    int choice;
    do
    {
        cout << "0.Play\n"
             << "1.Quit\n";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "Bravo, Lets play the game!\n";
            play_game();
            break;
        case 1:
            cout << "Thank you!\n";
            break;
        }

    } while (choice != 1);
    return 0;
}