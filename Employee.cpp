#include<iostream>
#include <cstring>
using namespace std;

    class Emp
    {
    private:
        int eid;
        char ename[20];
        float sal;
    public:
    void getemp(int id,char name[20],float basic);
    void putemp();
       
    };
    
  void  Emp::getemp(int id,char name[20],float basic)
    {
        eid=id;
        strcpy(ename,name);
        sal=basic;
    }
    
    void Emp::putemp()
    {
        cout<<"Empid = "<<eid<<endl;
        cout<<"name = "<<ename<<endl;
        cout<<"Sal = "<<sal<<endl;

    }
int main()
{
    Emp e;
    e.getemp(101,"Radha",1000.0);
    e.putemp();

};