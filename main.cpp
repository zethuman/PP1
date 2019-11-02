#include<iostream>
#include<math.h> 

using namespace std;
 
int main ()
{
   double x, x1 = 1,factorial = 1, rez = 1, l = cos(x);
   int n , z = 1; 

   cout << "x = ";   
   cin >> x;
   
   cout << "N = "; 
   cin >> n;


   for (int i = 1; i <= 2*n; i++)
   {
       factorial *= i;
       if (i % 2 == 0)
       {
         x1 = x * x1;
         rez += -z * ((x1 * x1) / factorial);
       }
   }

   cout << "Result: " << double(rez) << endl;
   cout << "Cos at a point x: " << l << endl;
   
   return 0;
}