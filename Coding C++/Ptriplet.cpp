#include <iostream>
using namespace std;

int main()
{
    int a, b, c, max;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter third number: ";
    cin>>c;
     
    if (a > b && a > c)
        max = a;
    else if (b > a && b > c)
        max = b;
    else 
        max = c;

    if (max * max == a*a + b*b)
        cout<<"It is a Pythagorean triplet";
    else 
        cout<<"It is not a Pythagorean triplet";
    
    return 0;

}