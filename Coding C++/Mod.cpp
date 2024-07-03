#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cout<<"Enter any two numbers: ";
    cin>>a>>b;

    int remainder;
    remainder=a%b;
    cout<<"Remainder of "<<a<<"/"<<b<<" is "<<remainder;
    return 0;

}