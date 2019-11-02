#include <iostream>
#include<sstream>
#include <math.h>
 
using namespace std;
 
int main()
{
    int x,bin, y;
    cin >> x >> y;
    int a,b,c,d,e,f,g,h, temp = 0;
    int k,l,m,n,o,p,q,r;
    
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

    r=y%2;
    y=y/2;
    
    q=y%2;
    y=y/2;
    
    p=y%2;
    y=y/2;

    o=y%2;
    y=y/2;

    n=y%2;
    y=y/2;

    m=y%2;
    y=y/2;

    l=y%2;
    y=y/2;
    
    k=y%2;
    
    stringstream ss;
    ss << a << b << c << d << e << f << g << h;
    string s;
    ss >> s;

    stringstream kk;
    kk << k << l << m << n << o << p << q << r;
    string z;
    kk >> z;

    for (int i = 0; i < s.size(); i++)
    {
       
        if (s[i] != z[i])
        {
           temp++;
        }
       
    }
    cout << temp;




}