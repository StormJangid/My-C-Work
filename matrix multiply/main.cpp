#include <iostream>

using namespace std;

int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,k,r1,r2,c1,c2;
    cout<<"Enter rows for first matrix : ";
    cin>>r1;
    cout<<"Enter columns for first matrix : ";
    cin>>c1;
    cout<<"Enter rows for first matrix : ";
    cin>>r2;
    cout<<"Enter columns for first matrix : ";
    cin>>c2;
    while(c1!=r2)
    {
        cout<<"Error! column of first matrix not equal to row of second."<<endl;
        cout<<"Please try again!"<<endl;
        cout<<"Enter rows for first matrix : ";
        cin>>r1;
        cout<<"Enter columns for first matrix : ";
        cin>>c1;
        cout<<"Enter rows for first matrix : ";
        cin>>r2;
        cout<<"Enter columns for first matrix : ";
        cin>>c2;
    }
    cout<<"Enter Elements of first matrix : "<<endl;
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            cout<<"Enter a"<<i+1<<j+1<<" : ";
            cin>>a[i][j];
        }
    }
    cout<<"Enter Elements of second matrix : "<<endl;
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            cout<<"Enter b"<<i+1<<j+1<<" : ";
            cin>>b[i][j];
        }
    }
     for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            c[i][j]=0;
        }
    }
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                c[i][j]=a[i][k]*b[k][j]+c[i][j];
            }
        }
    }
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            cout<<"  "<<c[i][j];
            if(j==c2-1)
                cout<<endl;
        }
    }
}
