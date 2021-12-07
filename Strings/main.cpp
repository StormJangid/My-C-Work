#include <iostream>

using namespace std;

int main()
{
    string a,b,i;
    cout<<"Enter 1st string :  ";
    getline(cin , a);
    cout<<"Enter 2nd string :  ";
    getline(cin,b);
    cout<<"Resultant string = ";
    i = a+b;
    cout<<i;
    return 0;
}
