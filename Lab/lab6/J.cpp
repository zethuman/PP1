#include<iostream>
#include <cmath>
#include<algorithm>
using namespace std;

int maxi( int a, int b, int c, int d) 
{
    int x,n;
    x = max(a, b);
    n = max(c, d);
    cout << max(x ,n) ; 
}
int main()
{

 int a, b, c, d;
 cin  >> a >> b >> c >> d;

 maxi( a ,b, c, d);
 }