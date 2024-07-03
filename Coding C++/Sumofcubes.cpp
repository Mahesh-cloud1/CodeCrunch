#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number upto which sum of cubes of numbers is to be displayed: ";
    cin>>n;
    
    int sum=0;
    for (int i=1; i<=n; i++)
    sum=sum+(i*i*i);
    cout<<"Sum of cubes of natural numbers upto "<<n<<": "<<sum;
    return 0;
}