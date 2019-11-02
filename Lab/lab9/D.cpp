#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
   int n , k;
   cin >> n >> k;
   int a[n];

   for(int i = 0; i < n; i++)
   {
       cin >> a[i];
   }
   int g = 0;
   for(int i = 0; i < n; i++)
   {
       if(a[i] == k)
       {
           g++;
       }
   }
   cout << g;
   
 }