#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter any three numbers: ";
    cin>>a>>b>>c;

    if (a>=b && a>=c)
    cout<<a<<" is Greatest number";

    else if (b>=a && b>=c)
    cout<<b<<" is Greatest number";

    else if (c>=a &&c>=b)
    cout<<c<<" is Greatest number";
    return 0;


}
