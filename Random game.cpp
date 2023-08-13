#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main()
{
    while(1)
    {
        int guessNumber,randomNumber;

        cout<< "Enter your guess between 1 to 5 : ";
        cin >> guessNumber;

        randomNumber =rand()%5+1;

        if(guessNumber ==randomNumber)
        {
            cout<<"You Have won"<<endl;
        }
        else
        {
            cout<<"you have lost .try again "<<endl;
            cout<<"Random number was :"<<randomNumber<<endl;
        }



    }
    getch();
}
