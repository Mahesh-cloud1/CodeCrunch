#include <iostream>
using namespace std;

int main()
{
    int a;
    float n1, n2;
    cout<<"Enter the operation you want to perform: ";
    cout<<"\n1. Addition ";
    cout<<"\n2. Subtraction ";
    cout<<"\n3. Multiplication ";
    cout<<"\n4. Division "<<endl;
    
    cin>>a;
    cout<<"Enter any two numbers: ";
    
    cin>>n1>>n2;

    switch (a)
    {
        case 1:
        cout<<"Sum = "<<n1+n2;
        break;

        case 2:
        cout<<"Difference = "<<n1-n2;
        break;

        case 3:
        cout<<"Product = "<<n1*n2;
        break;

        case 4:
        cout<<"Quotient = "<<n1/n2;
        break;

        default:
        cout<<"Invalid Input, Try again";
        break;

    }

    return 0;

}