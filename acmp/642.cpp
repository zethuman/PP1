#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
   long long n , s,k = 0;
   cin >> n >> s;
   int a[n];
   long long sum = 0;

   for(int i = 0; i < n; i++)
   {
     cin >> a[i];
   }
   
   sort(a,a+n);

   for(int i = 0; i < n; i++)
   {
     sum += a[i];
     if(sum <= s)
     {
       k++;
     }

   }

   cout << k;
}