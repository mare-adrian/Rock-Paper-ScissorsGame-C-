#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
using namespace std;

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

int main()
{
    srand(time(NULL));
    int score1, score2;
    string input;
    int pchoice, cchoice;
    int win;

    cout << "Let's play rock, paper, scissors" << endl;
    score1 = 0;
    score2 = 0;

    while ((score1 != 3) && (score2 != 3))
    {
        win = 0;
        cout << "Your score is: " << score1 << endl;
        cout << "Computer's score is: " << score2 << endl;
        cout << "Write what you choose: ROCK, PAPER, SCISSORS" << endl;
        // 1 rock //2 paper //3 scissors
        cin >> input;

        // map input -> cod pentru switch
        int code = 0;
        if (input == "ROCK") code = ROCK;
        else if (input == "PAPER") code = PAPER;
        else if (input == "SCISSORS") code = SCISSORS;

        switch (code)
        {
        case ROCK:
            cout << endl << "You chose rock";
            pchoice = 1;
            break;
        case PAPER:
            cout << endl << "You chose paper";
            pchoice = 2;
            break;
        case SCISSORS:
            cout << endl << "You chose scissors";
            pchoice = 3;
            break;
        default:
            cout << endl << "You need to write with caps one of these: PAPER, ROCK, SCISSORS" << endl;
            continue; // reia runda dacă inputul e invalid
        }

        cchoice = rand() % 3 + 1;

        switch (cchoice)
        {
        case 1:
            cout << endl << "Computer chose rock";
            break;
        case 2:
            cout << endl << "Computer chose paper";
            break;
        case 3:
            cout << endl << "Computer chose scissors";
            break;
        }

        if ((pchoice == 1) && (cchoice == 1))
        {
            cout << endl << "Is a draw";
        }
        if ((pchoice == 1) && (cchoice == 2))
        {
            cout << endl << "Computer won";
            score2++;
        }
        if ((pchoice == 1) && (cchoice == 3))
        {
            cout << endl << "You won";
            score1++;
        }

        if ((pchoice == 2) && (cchoice == 1))
        {
            cout << endl << "You won";
            score1++;
        }
        if ((pchoice == 2) && (cchoice == 2))
        {
            cout << endl << "Is a draw";
        }
        if ((pchoice == 2) && (cchoice == 3))
        {
            cout << endl << "Computer won";
            score2++;
        }

        if ((pchoice == 3) && (cchoice == 1))
        {
            cout << endl << "Computer won";
            score2++;
        }
        if ((pchoice == 3) && (cchoice == 2))
        {
            cout << endl << "You won";
            score1++;
        }
        if ((pchoice == 3) && (cchoice == 3))
        {
            cout << endl << "Is a draw";
        }
        cout << endl;
    }

    if (score1 == 3) cout << "You won the game!" << endl;
    else cout << "Computer won the game!" << endl;

    return 0;
}
