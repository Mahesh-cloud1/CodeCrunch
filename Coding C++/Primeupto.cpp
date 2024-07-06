#include <iostream> 
using namespace std;

int main()
{
    int n, c=0;
    cout<<"Enter the numbers upto which Prime numbers are to be displayed: ";
    cin>>n;
    cout<<"The prime numbers upto "<<n<<" are: ";
    for (int i=2; i<=n; i++)
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
}