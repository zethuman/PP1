#include <iostream>
#include<sstream>
#include <math.h>
 
using namespace std;
 
int main()
{
    int x,bin;
    cin >> x;
    int a,b,c,d,e,f,g,h;
    
    h=x%2;
    x=x/2;
    
    g=x%2;
    x=x/2;
    
    f=x%2;
    x=x/2;
    
    e=x%2;
    x=x/2;

    d=x%2;
    x=x/2;
    
    c=x%2;
    x=x/2;
    
    b=x%2;
    x=x/2;
    
    a=x%2;
    
    stringstream ss;
    ss << a << b << c << d << e << f << g << h;
    string s;
    ss >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            s[i] = '0';
        }
        else s[i] = '1';
    }
   int sum = 0;
    for (int i = 0; i < s.size(); i++ )
    {
        sum = (s[0] - 48 ) * 128 + (s[1] - 48) *64 + (s[2] - 48) *32 + (s[3] - 48) * 16 + (s[4] - 48) * 8 + (s[5] - 48) * 4 + (s[6] - 48) * 2 + (s[7] - 48); 
    }
  cout << sum;

    }