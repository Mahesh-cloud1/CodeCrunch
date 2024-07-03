#include <iostream>
using namespace std;

int main()
{
    int n;
    int factorial = 1;
    cout<<"Enter any positive integer: ";
    cin>>n;

    if (n<0)
        {cout<<"Factorial of negative number does not exist";}
        
    else 
        {
            for(int i=1; i<=n; ++i)
        {
            factorial = factorial * i;
        }
        cout<<"Factorial of "<<n<<" is = "<<factorial;
        }
    return 0;

}