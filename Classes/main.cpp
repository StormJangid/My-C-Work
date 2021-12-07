#include <iostream>

using namespace std;
class stu
{
    int c;
    float d;
public:
    multi(int a,int b)
    {
        c=a*b;
        cout<<"Multiply is = "<<c<<endl;
    }
    sum(int a,int b)
    {
        c = a+b;
        cout<<"Sum is = "<<c<<endl;
    }
    dev(float a,float b)
    {
        d = b/a;
        cout<<"Devide is = "<<d<<endl;
    }
    sub(int a,int b)
    {
        c = b-a;
        cout<<"subtract is = "<<c<<endl;
    }
};

int main()
{
    int a,b;
    cout<<"Enter value of a : ";
    cin>>a;
    cout<<"Enter value of b : ";
    cin>>b;
    stu ob;
    ob.sum(a,b);
    ob.sub(a,b);
    ob.dev(a,b);
    ob.multi(a,b);
    return 0;
}
