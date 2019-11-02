#include <iostream>
#include<sstream>
#include <math.h>
using namespace std;

int get_divisor(int x)
{
    if ( x % 2 == 0)
    {
       return  2 ;
    }
    if ( x % 3 == 0)
    {
        return 3;
    }
    if ( x % 5 == 0)
    {
        return 5;
    }
    if ( x % 7 == 0)
    {
        return 7;
    }
     
}

int main()
{
   int x;
   cin >> x;

   cout <<  get_divisor(x);
}