#include <iostream>
using namespace std;

float division(float a, float b)
{
    if( b == 0 )
    {
        throw "Can't Devide by zero condition!";
    }
    return (a/b);
}

int main ()
{
    float x,y;
    cout<<"Enter A : ";
    cin>>x;
    cout<<"Enter B : ";
    cin>>y;
    float z = 0;

    try
    {
        z = division(x, y);
        cout <<"\nDevision of "<<x<<" & "<<y<<" = "<<z << endl;
    }
    catch (const char* msg)
    {
        cerr << msg << endl;
    }

    return 0;
}
