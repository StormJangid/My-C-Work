#include <iostream>
#include <math.h>

using namespace std;
add(int a,int b)
{
    return a+b+add(9,1);
}

int main()
{
    cout<<add(10,20);


}
