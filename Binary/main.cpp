#include<iostream>
using namespace std;
class space
{
    int a, b, c;
public:
    inti( int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    friend space operator+(space e, space d);
    void show( );
};
space operator+(space e,space d)
{
    space temp;
    temp.a = e.a + d.a;
    temp.b = e.b + d.b;
    temp.c = e.c + d.c;
    return temp;
}
void space::show( )
{
    cout << "\n The value of a is : "<< a;
    cout << "\n The value of b is : " << b;
    cout << "\n The value of c is : " << c;
}
int main( )
{
    space ob, ob1, ob2;
    cout << "The values after plus operator are : ";
    ob.inti(25,36,56);
    ob1.inti(2,6,5);
    space::+(ob , ob1);
//    ob2 = ob + ob1;
    ob2.show( );
    return 0;
}
