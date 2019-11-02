#include <iostream>
#include<sstream>
#include <math.h>
#include<algorithm>
using namespace std;
 
int main()
{
    int x,bin;
    int cnt;
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
    reverse(s.begin(),s.end());
   for(int i = 0; i < s.size(); i++)
   {
     if(s[i] == '1')
     {
       break;
     }
     cnt++;
   }

   cout << cnt;
    }