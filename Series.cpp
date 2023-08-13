//1+2+3+......+
#include <iostream>
#include <conio.h>
//#include<cmath>
using namespace std;
int main ()

{
  int sum =0 , n ;
  cout<<"Enter the last number:";
  cin >> n;
  for ( int i=1;i<=n; i=i+1)

  {

    sum = sum +i*i*i*i*i    ;//Difrent way :sum +pow(i,5);

  }
  cout << sum ;

 getch ();

}
