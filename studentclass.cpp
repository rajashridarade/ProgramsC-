#include<iostream>

using namespace std;
class Stu
{
  private:  
    int id;
    char name[20];

 public:
       void readstu()
    {
        cout<<"Enter student id and name :";
        cin>>id>>name;

    }

    void showstu();
};

void Stu :: showstu()
{
    cout<<"stu id="<<id<<endl;
    cout<<"Name= "<<name;
}

int main() 
{
    Stu s1;
   // clrscr();
    s1.readstu();
    s1.showstu();
   // return 0;  

   // getch();
};