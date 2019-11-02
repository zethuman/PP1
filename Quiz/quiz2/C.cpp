#include<iostream>
#include <math.h>
using namespace std;

int modadd(int a, int b, int x,int z) {
   
   z = (a + b) % x;

   return z;
}

int main()
{

    int a, b, x,z;
   cin >> a >> b >> x;
   cout << modadd( a,  b,  x, z);
    
    return 0;
    }
