#include <iostream>
using namespace std;

int check(int n)
{
    int c,i;
        if(n==0 || n==1)
         c = false;
        else
            for(i=2; i<n; i++)
                if(n%i==0)
                    c = false;
        return c;
    }

int main() {
    int n;

    cout << "Enter a positive  integer: ";
    cin >> n;

    if (check(n))
        cout << n << " is a prime number.";
    else
        cout << n << " is not a prime number.";
    return 0;
}


