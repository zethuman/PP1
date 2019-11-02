#include<iostream>
#include<map>
#include<iomanip>

using namespace std;

int main()
{
   int n;
   cin >> n;
   int a[n];
   double sum ;

   for(int i = 0; i < n; i++)
   {
       cin >> a[i];
   }
   
   for(int i = 0; i < n; i++)
   {
       sum += a[i];
   }
   
  
  
   

   cout << fixed << setprecision(2) << sum/n;

}