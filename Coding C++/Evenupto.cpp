#include <iostream> 
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter Starting point: ";
    cin>>a;
    cout<<"\nEnter ending point: ";
    cin>>b;

    cout<<"\nEven numbers between "<<a<<" and "<<b<<" are: ";
    for (int i=a; i<b; i++)
    {
        if (i%2 == 0)
        cout<<i<<" ";
    }
    return 0;
}