#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number:";
    cin>>num;
    switch(num)
    {
        case 10:
        cout<<"10 is Number ";
        break;
        case 20:
        cout<<"20 is number";
        break;
        default :
        cout<<"number is not 10,20";
        break;
    }
}