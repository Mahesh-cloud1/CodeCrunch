#include <iostream>
using namespace std;

int main()
{
    int temp, a, b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    temp = a;
    a = b;
    b = temp;

    cout<<"First number after swapping is: "<<a;
    cout<<"\nSecond number after swapping is: "<<b;

    return 0;
}