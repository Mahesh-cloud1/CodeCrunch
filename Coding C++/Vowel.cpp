#include <iostream>
using namespace std;

int main()
{
    char alpha;
    cout<<"Enter any Alphabet: ";
    cin>>alpha;
    
    if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u')
    {
        cout<<alpha<<" is a Vowel";
    }
        else if (alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U')
        {    
            cout<<alpha<<" is Vowel";
        }

        else 
        {    
            cout<<alpha<<" is a Consonant";
        }
    return 0;

}