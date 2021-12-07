#include <iostream>

using namespace std;

int main()
{
    int a,b,c,n,i,marks[200];
    cout<<"How many Students marks you want to store : ";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"Enter marks of number "<<i+1<<" student : ";
        cin>>marks[i];
    }
    for(i=0; i<n; i++)
    {
        cout<<"Marks of number "<<i+1<<" student : ";
        cout<<marks[i]<<endl;
    }

    return 0;
}
