#include <iostream>

using namespace std;
void display(int m,int n)
{    int a[m][n];
    int i,j;
    for(i=0; i<m; i++)
{
    for(j=0; j<n; j++)
    {
    cout<<" "<<a[i][j];
    cout<<"\n";}}
}

int main()
{
    int m=3, n=2;
    display(m,n);
}
