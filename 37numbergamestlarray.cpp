#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <array>
using std ::cin;
using std ::cout;
int play_game()
{
    std::array<int, 251> array;
    int random;
    int count = 0;
    random = rand() % 101;
    cout << "Game is being played\n";
    // cout << random << "\n";

    cout << "Guess the number game!\n";
    cout << "Enter number : ";

    while (true)
    {
        int guess;
        cin >> guess;
        array[count] = guess;
        if (guess == random)
        {
            cout << "Guessed right, You won the game!\n";
            cout << "Your number of guesses are : " << count << "\n";
            cout << "Your Guessed numbers are :\n";
            for (int i = 0; i < count; i++)
            {
                cout << array[i] << "\t";
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
        count++;
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