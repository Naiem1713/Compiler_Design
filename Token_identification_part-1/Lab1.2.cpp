#include <iostream>
#include <string>
using namespace std ;

int main ()
{
    string expression ;

    cout << "Enter your expression : ";
    getline(cin , expression) ;

    cout << "Arithmetic Operators are : ";

    for (char c : expression)
    {
        if (c=='+' || c=='-' || c=='*' || c=='/' || c=='%' ||c=='=')
        {
            cout << c << " ";
        }
    }
    cout << endl;
return 0;
}
