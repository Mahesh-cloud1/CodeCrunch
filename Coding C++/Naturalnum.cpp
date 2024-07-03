#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number upto which natural numbers upto to be displayed: ";
    cin>>n;
    cout<<"Natural numbers upto "<<n;

    for(int i=1; i<=n; i++)
    cout<<" "<<i;
    return 0;
}