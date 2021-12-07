#include <iostream>

using namespace std;
class incdcr
{
    int a,b;
public:
    void getdata()
    {
        cout<<"Enter A : ";
        cin>>a;
        cout<<"Enter B : ";
        cin>>b;
    }
    incdcr operator--()
    {
        --a;
        --b;
    }
    incdcr operator++()
    {
        ++a;
        ++b;
    }
    void show()
    {
        cout<<"\nA : "<<a;
        cout<<"\nB : "<<b;
    }
};

int main()
{
    incdcr var;
    var.getdata();
    --var;
    cout<<"Values after Decrement : ";
    var.show();
    ++var;
    ++var;
    cout<<"\nValues after Increment : ";
    var.show();
    return 0;
}
