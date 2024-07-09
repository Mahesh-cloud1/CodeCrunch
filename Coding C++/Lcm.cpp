#include <iostream>
using namespace std;

int main()
{
    int a, b, max, lcm;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    if (b > a)
        max = b;
    else 
        max = a;
        
    
    do
    {
        if (max % a == 0 && max % b == 0)
        {
            lcm = max;
            cout<<"LCM of "<<a<<" and "<<b<<" is = "<<lcm;
            break;
        }
        else 
            ++max;
    }while (true);

    return 0;
}