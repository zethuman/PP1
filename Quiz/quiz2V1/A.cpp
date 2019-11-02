#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;

int absolute(int a, int b)
{
    return abs(b - a);
}
int main()
{
   int a, b;
   cin >> a >> b;

  

   cout <<  absolute(a, b);
}

