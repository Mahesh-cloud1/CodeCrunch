#include <iostream> 
using namespace std;

int main()
{
    int n; 
    cout<<"Enter the number upto which sum of odd numbers is to be displayed: ";
    cin>>n;
    
    cout<<"The odd numbers are: ";
    int sum=0;
    for (int i=1; i<=n; i=i+2)
    {    
        if (i%2 != 0)
        sum = sum+i;
        cout<<i<<" ";
    }
     cout<<"\nSum of odd numbers upto "<<n<<" is = "<<sum;
    return 0;
    
}