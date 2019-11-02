#include <iostream>
#include<cmath>
#include<iomanip>

using namespace std;

double l;
int main()
{
  double a,b,c;
  

   cin >> a >> b >> c;
   l = (a+b+c)/2;
   double s;

   s = sqrt(l*(l-a)*(l-b)*(l-c));

   cout << fixed << setprecision(2) << s;
}