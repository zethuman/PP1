#include <iostream>
#include<sstream>
#include <math.h>
 
using namespace std;
 
int main()
{
   int x, y, a ,b;

   cin >> x >> y >> a >> b;

   if( x + y == a + b || x + y > a + b)
   {
       cout << "Yes";
   }
   else cout << "No";

}                                         