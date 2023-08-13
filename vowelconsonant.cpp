#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter any letter:";
    cin>>ch;
    ch=towlower(ch);
    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout<<"vowel";
        break;

    default:
    cout<<"consonant";







    }







    getch();
}
