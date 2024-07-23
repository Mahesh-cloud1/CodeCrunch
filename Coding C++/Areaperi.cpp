#include <iostream>
using namespace std;

int main()
{
    int l,b;
    cout<<"Enter length of rectangle: ";
    cin>>l;
    cout<<"Enter breadth of rectangle: ";
    cin>>b;

    cout<<"Perimeter of rectangle is = "<<2*(l+b)<<endl;
    cout<<"Area of rectangle = "<<l*b;

    return 0;
}