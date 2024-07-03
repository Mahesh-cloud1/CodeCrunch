#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number upto which squares are to be displayed: ";
    cin>>n;
    cout<<"Squares of natural numbers upto "<<10<<": ";

    for (int i=1; i<=n; i++)
    cout<<" "<<(i*i);
    return 0;
}