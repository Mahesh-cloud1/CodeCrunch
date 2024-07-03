#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number upto which sum of squares of numbers is to be displayed: ";
    cin>>n;

    int sum=0;
    for (int i=1; i<=n; i++)
    sum=sum+(i*i);
    cout<<"Sum of squares of natural numbers upto "<<n<<": "<<sum;
    return 0;
}