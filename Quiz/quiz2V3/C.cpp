#include <iostream>
#include<sstream>
#include <math.h>
 
using namespace std;
 
int main()
{
   int n;
   cin >> n;
   int tenge[n];
   int doll;

   for(int i = 0; i < n; i++)
   {
       cin >> tenge[i];
   }
   cin >> doll;
   
   for(int i = 0; i < n; i++)
   {
       tenge[i] *= doll;
   }
   
   for(int i = 0; i < n; i++)
   {
       cout <<  tenge[i] << " ";
   }
}