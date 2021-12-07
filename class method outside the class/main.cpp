#include <iostream>
#include<iomanip>
using namespace std;
class A
{
    float a,b,p;
public:
    void get();
    void per();
    void out();
};
void A::get()
{
    cout<<"Enter Your Marks : ";
    cin>>a;
    cout<<"Enter Total Marks : ";
    cin>>b;
    if(a>b)
    {
        do
        {
            cout<<"Enter valid marks [YourMarks < TotalMarks]"<<endl;
            cout<<"Enter Your Marks : ";
            cin>>a;
            cout<<"Enter Total Marks : ";
            cin>>b;
        }
        while(a>b);
    }
}
void A::per()
{
    p=(a/b)*100;
}
void A::out()
{
    cout<<setprecision(4);
    cout<<"Your percentage is : "<<p<<"%";
}

int main()
{
    A C;
    C.get();
    C.per();
    C.out();
}
