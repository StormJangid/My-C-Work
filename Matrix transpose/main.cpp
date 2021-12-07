#include <iostream>

using namespace std;

int main()
{
    int a[10][10],b[10][10],i,j,k,r,c;
    cout<<"Enter rows of matrix : ";
    cin>>r;
    cout<<"Enter columns of matrix : ";
    cin>>c;
    cout<<"Enter Elements of matrix : "<<endl;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cout<<"Enter a"<<i+1<<j+1<<" : ";
            cin>>a[i][j];
        }
    }
    cout<<"Entered matrix : "<<endl;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cout<<"  "<<a[i][j];
            if(j==c-1)
            {
                cout<<endl;
            }
        }
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            b[j][i]=a[i][j];
        }
    }
    cout<<endl<<"Transposed Matrix : "<<endl;
    for(i=0; i<c; i++)
    {
        for(j=0; j<r; j++)
        {
           cout<<"  "<<b[i][j];
           if(j==r-1)
           {
               cout<<endl;
           }
        }
    }

}
