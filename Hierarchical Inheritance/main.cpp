#include <iostream>

using namespace std;

class A
{
public:
    float a,b;
    float getab()
    {
        cout<<"Enter A : ";
        cin>>a;
        cout<<"Enter B : ";
        cin>>b;
    }
};
class B: public A
{
public:
    void multiply()
    {
        int c = a*b;
        cout<<"Multiply of "<<a<<" & "<<b<<" = "<<c<<endl;
    }
};
class C: public A
{
public:
    void division()
    {
        float d =a/b;
        cout<<"Divison of "<<a<<" & "<<b<<" = "<<d<<endl;
    }
};
int main()
{
    A get;
    B mul;
    C div;
    mul.getab();
    mul.multiply();
    div.a = mul.a;
    div.b = mul.b;
    div.division();
    return 0;
}
