#include <iostream>
using namespace std;

int main()
{
    int a, b, gcd;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
     if (b > a)
    {
        int temp = b;
        b = a;
        a = temp;
    }
    for (int i=1; i <= a; ++i)
    {
        if (a%i == 0 && b%i == 0)
        gcd = i;        
    }
    cout<<"GCD or HCF of "<<a<<" and "<<b<<" is = "<<gcd;

    return 0;
    
}