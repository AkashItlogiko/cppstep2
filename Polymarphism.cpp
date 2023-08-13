#include <iostream>
#include <conio.h>

using namespace std;

class person

{
 public:
     void display ()
    {
       cout<< " I am person"<<endl;
    }
};
 class student : public person
 {
  public :
       void display()
       {
           cout<< " I am student"<<endl ;

       }

 };

 class Teachar : public person
 {
  public :
       void display()
       {
           cout<< " I am Teachar"<<endl ;

       }

 };
int main()

{
  Teachar t;
  student s;
  person *p;


  p = &s;
  p -> display();




 getch();
}
