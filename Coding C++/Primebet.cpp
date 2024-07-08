#include <iostream>
using namespace std;

int main()
{
    int n1, n2, c;
    cout<<"Enter Starting point: ";
    cin>>n1;
    cout<<"Enter ending point: ";
    cin>>n2;
    cout<<"Prime numbers between "<<n1<<" and "<<n2<<" are: ";
    
    for (int i=n1; i<=n2; i++)
    {   
        c=0;
        for (int j=2; j<i; j++)
        {
            if (i%j == 0)
            c++;
        }
        if (c==0)
        cout<<i<<" ";
    }
    return 0;    
}
