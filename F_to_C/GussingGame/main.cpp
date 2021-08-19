#include <iostream>
using namespace std;
int main()
{
    cout << "HINT - 'The correct number is even and lie between 2 to 20'"<<endl;
    int correctNumber = 8;
    int guessLimit = 5;
    int guessCount = 0;
    int guess;
    bool  outOfGuesses = false;
    cout<<"You have "<<guessLimit<<" guesses "<<endl;
    while (correctNumber != guess && !outOfGuesses )
    {
        if(guessCount < guessLimit){
            cout<<endl<<"Enter your guess ";
            cin>> guess;
            guessLimit--;
    }
        else{
            outOfGuesses = true;
        }
        if(guess > correctNumber && !outOfGuesses){
            cout<<"Correct number is lesser then the guess"<<endl;
        }
        if(guess < correctNumber && !outOfGuesses){
                cout<<"correct number is greater then the guess"<<endl;
        }
         if(!outOfGuesses && guess != 8){
         cout<<guessLimit<<" guesses left"<<endl;
        }
    }
    if (outOfGuesses){
        cout<<endl<<"Better Luck Next Time"<<endl<<"The correct Number was "<<correctNumber<<endl;
    }
    else{
        cout<<"You Got It!! ";
    }
    return 0;
}
