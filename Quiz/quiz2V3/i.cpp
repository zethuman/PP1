#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b , c;
    cin >> a >> b >> c;
 
    if ( c == (sqrt(a*a + b*b)) || a == sqrt(c*c + b*b) || b == sqrt(a*a - c*c) || c == sqrt(b*b - a*a))
    {
    if (c != 0)
    {
        if (a != 0)
        {
            if (b != 0 )
            {
                 cout << "Yes";
            }else cout << "No";
        }else cout << "No";
    }else cout << "No";
        
    }
    else cout << "No";
    
    
}