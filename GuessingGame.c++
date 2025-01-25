#include <iostream>
using namespace std;



int main(){

int secretNum = 8;
int guess;
int guessCount = 0;
int guessLimit = 3;
bool outOfGuesses = false;

while (secretNum != guess && !outOfGuesses )
{
    if (guessCount < guessLimit)
    {
    cout << "enter guess: ";
    cin >> guess;
    guessCount++;
    }
    else
    {
        outOfGuesses = true;
    }
}
if (outOfGuesses)
{
    cout << "You Lost";
}
else
{
     cout << "You Won";
}

    return 0;
}