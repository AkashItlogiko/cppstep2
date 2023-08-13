#include <iostream>
using namespace std;

int main()
{
    int year;
    cout <<"Enter a year:";
    cin>>year;

    if(year%400==0)
    {
        cout<<"Is a leapyear :"<<year;
    }


    else if(year%100==0)
    {
        cout<<"Is not a leapyear :"year;
    }
    else if(year %4 ==0)
    {
        cout<<"Is a leapyear:"<<year;
    }

    else
    {
        cout<<"Is not leapyear:";
}


    return 0;
}
