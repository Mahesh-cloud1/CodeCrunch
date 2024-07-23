#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the quantity you want to calculate: ";
    cout<<"\n 1. Perimeter/ Circumference";
    cout<<"\n 2. Area";
    cout<<"\n 3. Volume";
    cin>>a;
    
    switch (a)
    {
        case 1:
            int c;
            cout<<"\n Choose the desired shape: ";
            cout<<"\n 1. Square ";
            cout<<"\n 2. Rectangle ";
            cout<<"\n 3. Triangle ";
            cout<<"\n 4. Circle ";
            cout<<"\n 5. Trapezium ";
            cin>>c;
            
            switch (c)
            {
                case 1: 
                float s1;
                cout<<"Enter length of side of square: ";
                cout<<"\n Side = ";
                cin>>s1;
                cout<<"\n Perimeter of Sqaure having side "<<s1<<" is = "<<4*s1;
                break;

                case 2:
                float l1, b1;
                cout<<"Enter length and breadth of Retangle: ";
                cout<<"\n Length = ";
                cin>>l1;
                cout<<"\n Breadth = ";
                cin>>b1;
                cout<<"\n Perimeter of Rectangle having length "<<l1<<" and breadth "<<b1<<" is = "<<2*(l1+b1);
                break;

                case 3:
                float S1, S2, S3;
                cout<<"Enter length of sides of Triangle ";
                cout<<"\n Side 1 = ";
                cin>>S1;
                cout<<"\n Side 2 = ";
                cin>>S2;
                cout<<"\n Side 3 = ";
                cin>>S3;
                cout<<"\n Perimeter of Triangle having sides "<<S1<<", "<<S2<<" and "<<S3<<" is = "<<(S1+S2+S3);
                break;
                
                case 4:
                float r;
                cout<<"Enter the radius of Circle: ";
                cout<<"\n Radius = ";
                cin>>r;
                cout<<"Circumference of Circle having radius "<<r<<" is = "<<(2*3.14*r);
                break;

                case 5:
                float A1, B1, C1, D1;
                cout<<"Enter the length of sides of Trapezium: ";
                cout<<"\n Side 1 = ";
                cin>>A1;
                cout<<"\n Side 2 = ";
                cin>>B1;
                cout<<"\n Side 3 = ";
                cin>>C1;
                cout<<"\n Side 4 = ";
                cin>>D1;
                cout<<"\n Perimeter of Trapezium having sides "<<A1<<", "<<B1<<", "<<C1<<" and "<<D1<<" is = "<<(A1+B1+C1+D1);
                break;
            }
        break;

        case 2:
            int d;
            cout<<"\n Choose the desired shape ";
            cout<<"\n 1. Square ";
            cout<<"\n 2. Rectangle ";
            cout<<"\n 3. Triangle ";
            cout<<"\n 4. Circle ";
            cout<<"\n 5. Trapezium ";
            cout<<"\n 6. Cylinder ";
            cout<<"\n 7. Cube "; 
            cout<<"\n 8. Cuboid ";
            cout<<"\n 9. Sphere ";
            cin>>d;

            switch (d)
            {
                case 1:
                float s;
                cout<<"Enter the side of square: ";
                cout<<"\n Side = ";
                cin>>s;
                cout<<"\n Area of Square having side "<<s<<" is = "<<(s*s);
                break;

                case 2:
                float L1, L2;
                cout<<"Enter the length and breadth of Rectangle: ";
                cout<<"\n Length = ";
                cin>>L1;
                cout<<"\n Breadth = ";
                cin>>L2;
                cout<<"\n Area of Rectangle having length "<<L1<<" and breadth "<<L2<< " is = "<<(L1*L2);
                break;

                case 3:
                float T1, T2;
                cout<<"Enter the Base and Height of Triangle: ";
                cout<<"\n Base = ";
                cin>>T1;
                cout<<"\n Height = ";
                cin>>T2;
                cout<<"Area of Triangle having base "<<T1<<" and height "<<T2<<" is = "<<(0.5*T1*T2);
                break;

                case 4:
                float R;
                cout<<"Enter the radius of Circle: ";
                cout<<"\n R = ";
                cin>>R;
                cout<<"\n Area of Circle with radius "<<R<< " is = "<<(3.14*R*R);
                break;

                case 5:
                float Tr1, Tr2, Tr3, Tr4;
                cout<<"Enter the length of sides of Trapezium: ";
                cout<<"\n Base 1 = ";
                cin>>Tr1;
                cout<<"\n Base 2 = ";
                cin>>Tr2;
                cout<<"\n Height 3 = ";
                cin>>Tr3;
                cout<<"\n Area of Trapezium having base "<<Tr1<<", "<<Tr2<<" and height "<<Tr3<<" is = "<<(0.5*(Tr1+Tr2)*Tr3);
                break;

                case 6:
                float c1, c2;
                cout<<"Enter Radius and Height of Cylinder: ";
                cout<<"\n Radius = ";
                cin>>c1;
                cout<<"\n Height = ";
                cin>>c2;
                cout<<"\n Surface area of Cylinder having radius "<<c1<<" and height "<<c2<<" is = "<<((2*3.14*c1*c2)+(2*3.14*c1*c1));
                break;

                case 7:
                float cb1;
                cout<<"Enter the length of side of Cube: ";
                cout<<"\n Side = ";
                cin>>cb1;
                cout<<"\n Surface area of Cube having side "<<cb1<<" is = "<<(6*cb1*cb1);
                break;

                case 8:
                float cbd1, cbd2, cbd3;
                cout<<"Enter the lengths of sides of Cuboid: ";
                cout<<"\n Length = ";
                cin>>cbd1;
                cout<<"\n Width = ";
                cin>>cbd2;
                cout<<"\n Height = ";
                cin>>cbd3;
                cout<<"\n Surface area of Cuboid having Length "<<cbd1<<" Width "<<cbd2<<" Height "<<cbd3<<" is = "<<(2*(cbd1+cbd2+cbd3));
                break;

                case 9:
                float sp1;
                cout<<"Enter the radius of Sphere: ";
                cout<<"\n Radius = ";
                cin>>sp1;
                cout<<"\n Surface area of Sphere having radius "<<sp1<<" is = "<<(4*3.14*sp1*sp1);
                break;
            }
        break;

        case 3:
            int e;
            cout<<"\n Choose the desired shape: ";
            cout<<"\n 1. Cube "; 
            cout<<"\n 2. Cuboid ";
            cout<<"\n 3. Cylinder ";
            cout<<"\n 4. Sphere ";
            cin>>e;

            switch (e)
            {
                case 1:
                float CB1;
                cout<<"Enter the length of side of Cube: ";
                cout<<"\n Side = ";
                cin>>CB1;
                cout<<"\n Volume of Cube having side "<<CB1<<" is = "<<(CB1*CB1*CB1);
                break;

                case 2:
                float CBD1, CBD2, CBD3;
                cout<<"Enter the Length, Width and Height of Cuboid: ";
                cout<<"\n Length = ";
                cin>>CBD1;
                cout<<"\n Width = ";
                cin>>CBD2;
                cout<<"\n Height = ";
                cin>>CBD3;
                cout<<"\n Volume of Cuboid having Length "<<CBD1<<" Width "<<CBD2<<" and Height "<<CBD3<<" is = "<<(CBD1*CBD2*CBD3);
                break;

                case 3:
                float Ch1, Ch2;
                cout<<"Enter the radius and height of Cylinder: ";
                cout<<"\n Radius = ";
                cin>>Ch1;
                cout<<"\n Height = ";
                cin>>Ch2;
                cout<<"\n Volume of Cylinder having Radius "<<Ch1<<" and Height "<<Ch2<<" is = "<<(3.14*Ch1*Ch1*Ch2);
                break;

                case 4:
                float Sp1;
                cout<<"Enter the radius of Sphere: ";
                cout<<"\n Radius = ";
                cin>>Sp1;
                cout<<"\n Volume of Sphere having radius "<<Sp1<<" is = "<<(1.33*3.14*Sp1*Sp1*Sp1);
                break;
            }
        default :
        cout<<"Invalid input";    
        break;
    }
    return 0;

}