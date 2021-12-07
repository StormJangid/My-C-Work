#include <iostream>

using namespace std;
template <class A>
class B
{
    int a,b;
public:
    void calc(A a,A b)
    {
        cout<<"Sum of A and B is = "<<a+b<<endl;
        cout<<"Subtraction of A and B is = "<<a-b<<endl;
        cout<<"Multiply of A and B is = "<<a*b<<endl;
        if(b==0)
        {
            cout<<"Can't Divide by zero!"<<endl;
        }
        else
        {
            cout<<"Division of A and B is = "<<a/b<<endl;
        }
    }
};

int main()
{
    B<float> C;
    float a,b;
    cout<<"Enetr A : ";
    cin>>a;
    cout<<"Enetr B : ";
    cin>>b;
    C.calc(a,b);
}
