#include <iostream>
using namespace std;

class base
{
public:
    virtual void print()
    {
        cout << "Base Function" << endl;
    }
};

class derived : public base
{
public:
    void print()
    {
        cout << "Derived Function" << endl;
    }
};

int main()
{
    derived derived_1;
    base b;
    base *base1= &b;
    base1->print();
    cout<<endl;
    base1= &derived_1;
    base1->print();
    return 0;
}
