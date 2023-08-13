#include <iostream>
#include <conio.h>

using namespace std;
class person
{
  public :
      string name ;
      int age ;

    void display1 ()
    {
      cout << "name : " <<name <<endl;
      cout << "age : "  <<age <<endl;


    }
} ;

class student : public person
{
  //name,age,display1 ()
 public :
      int id ;
      void display2 ()
   {
     cout << "id : " <<id <<endl;
     display1 ();

   }

};

int main()
{
 student s1;
 s1.id =101 ;
 s1.name = "Anusul";
 s1.age = 23;
 s1.display2();
  getch();
}


