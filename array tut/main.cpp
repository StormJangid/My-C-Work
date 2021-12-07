#include <iostream>

using namespace std;

int main()
{
    int i,n,c;
    int a[10]={123,125,12,26,35,14};
    cin>>n;
    for(i=0; i<6; i++)
    {
        if(n==a[i]){
            cout<<"You can not use this number!"<<endl;
        }
    }

}
