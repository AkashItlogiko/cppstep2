#include<iostream>
#include<conio.h>
using namespace std;
main()

{
  int num ;

  cout <<" Enter any integer number :" ;
  cin >>num;

  for (int i =1; i<=10 ; i++ )
  {
      cout<< num  << " x " << i <<" = "<< (num*i) <<endl;
  }



    getch();
}
