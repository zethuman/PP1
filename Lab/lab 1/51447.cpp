#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int a,b,c,d;
    
    d=x%2;
    x=x/2;
    
    c=x%2;
    x=x/2;
    
    b=x%2;
    x=x/2;
    
    a=x%2;
    
    cout<<8*d+4*c+2*b+a<<endl;
} 
