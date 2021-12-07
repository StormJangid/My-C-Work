#include <iostream>

using namespace std;

class sum
{
    int a,b,c;
public:
    void output()
    {
        cout<< "Here's c : "<<c;
    }
    int add();
    void input()
    {
        cout<<"Enter a : ";
        cin>>a;
        cout<<"Enter b : ";
        cin>>b;
    }
};
int sum::add()
{
    c = a+b;
    return c;
}

int main()
{
    sum a;
    sub b;
    a.input();
    a.add();
    a.output();
}
