#include <iostream>

using namespace std;

class study
{public:
    int a,b,c,f,x=9;
    static int d,e;
    save(int a,int b,int d,int e)
    {
        c=a+b;
        f=d+e;
        cout<<c<<" "<<f;
    }
    inc()
    {
        d++;
        e++;
        x++;
    }

};
int study::d =4;
int study::e =5;
int main()
{
        cout<<endl<<study::e<<endl;

    study ob;
    ob.save(2,4,6,8);
    cout<<endl;
    int g,i;
    const int h=8;
    g=5; i=7;
    cout<<g<<endl<<h<<endl<<i;
    study::d=study::e+i;
    cout<<endl<<study::d;
    ob.x=88;
    cout<<endl<<ob.x;
    ob.inc();
    cout<<endl<<ob.x<<" "<<ob.d<<endl<<ob.e;
    cout<<endl<<ob.x<<" "<<study::d;
}
