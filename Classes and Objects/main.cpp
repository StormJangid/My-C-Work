#include <iostream>
#include <string>

using namespace std;

class large
{
    int m,n;
public:
    void input(void);
    void display(void);
    int largest(void);
};
int large::largest(void)
{
    if(m>=n)
        return m;
    else
        return n;
}
void large::display(void)
{
    cout<<"Largest number is = "<<largest();
}
void large::input(void)
{
    cout<<"Enter m & n : ";
    cin>>m; cin>>n;
}
int main()
{
    large a;
    a.input();
    a.display();
    return 0;
}
