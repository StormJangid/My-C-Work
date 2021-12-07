#include <iostream>
using namespace std;
class A
{
public:
    int a,b;
    void getab()
    {
        cout<<"Enter A : ";
        cin>>a;
        cout<<"Enter B : ";
        cin>>b;
    }
};
class B : public A
{
public:
    int multi()
    {
        int c = a*b;
    }
};
class C : public B
{
public:
    int d;

    void show(int d)
    {
        cout<<"Multiply of a & b is : "<<d;
    }
};
int main()
{
    int r;
    C mul;
    mul.getab();
    r = mul.multi();
    mul.show(r);
    return 0;
}
