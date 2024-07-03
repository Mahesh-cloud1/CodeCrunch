#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number upto which cubes are to be displayed: ";
    cin>>n;
    cout<<"Cubes of natural numbers upto "<<n<<": ";

    for (int i=1; i<=n; i++)
    cout<<" "<<(i*i*i);
    return 0;
}