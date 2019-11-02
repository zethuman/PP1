#include<iostream>

using namespace std;

int main ()
{
    char a;
    cin >> a;

        if(a > 64 && a < 91)
            a += 32; 
        if (a > 96 && a < 123)
            a -= 32; 

cout << a << endl; 


return 0; 

} 
