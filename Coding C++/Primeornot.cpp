#include <iostream>
using namespace std;

int main()
{
    int a;
    int i;
    cout<<"Enter any number: ";
    cin>>a;

    if (a<1)
    cout<<"Invalid input Enter positive integer";
    else if (a==1)
    cout<<"1 is not a prime number";
    else if (a==2)
    cout<<"2 is a Prime number";
    else
    for (i=2; i<a; i++)
    {
        if (a%i==0)
        cout<<a<<" is not Prime number";
        else 
        cout<<a<<" is a Prime number";
        break;
        
    }
    return 0;
}