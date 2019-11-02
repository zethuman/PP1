#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    int n, cnt = 0;
    cin >> n;
   
   
   for (int i = 1; i <= n ; i++)
  
    if (i % 7 == 0 or i % 7 == 2)
   {
       cnt++;
   }
    cout << cnt;

}