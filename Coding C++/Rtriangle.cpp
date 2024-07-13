#include <iostream>
using namespace std;

int main()
{
    int n, max, a,b, c, A, B, C;
    cout<<"1. Enter sides of triangle";
    cout<<"\n2. Enter angles of triangle"<<endl;
    cin>>n;

    switch (n)
    {
        case 1:
        {
            cout<<"Enter first side of triangle: ";
            cin>>a;
            cout<<"Enter second side of triangle: ";
            cin>>b;
            cout<<"Enter third side of triangle: ";
            cin>>c;

            if (a > b && a > c)
            {
                max = a;
            }
            else if (b > a && b > c)
            {
                max = b;
            }
            else 
            {
                max = c;
            }

            if (max*max == a*a + b*b)
                cout<<"It is a right angled triangle";
            else 
                cout<<"It is not a right angled triangle";
            break;
        }  
        case 2:
        {
            cout<<"Enter first angle of triangle: ";
            cin>>A;
            cout<<"Enter second angle of triangle: ";
            cin>>B;
            cout<<"Enter third angle of triangle: ";
            cin>>C;
            
            
            if ((A + B + C == 180) && (A == 90 || B == 90 || C == 90))
            {
                cout<<"It is a right angled triangle";
            }
            else if ((A + B + C == 180) && (A != 90 && B != 90 && C != 90))
                cout<<"It is not a right angled triangle";
            else 
                cout<<"It is not a triangle as sum of all angles is not 180";
            break;
        }
    }
    return 0;
}