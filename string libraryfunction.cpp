#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

int main()

{
  char name1 [] ="anisul";
  char name2 [] ="anisul";

  int value = strcmp(name1,name2);
  if(value==0)
  cout<< "string are equal";
  else
    cout<< "string are not equal";

  getch();
}
