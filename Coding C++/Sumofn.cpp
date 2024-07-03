#include <iostream>
using namespace std; 

int main()
{
    int n;
    int sum=0;
    cout<<"Enter the number upto which sum is to be found: ";
    cin>>n;

    for (int i=1; i<=n; i++) 
    {
         sum=sum+i;
    }
    cout<<"Sum of first "<<n<<" natural numbers is: "<<sum;
    return 0;

}
