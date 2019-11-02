#include<iostream>
#include<cmath>

using namespace std;

int main()
{
   int a;
   long long int k = 0;

   for(int i = 0; i < 31; i++)
   {
     cin >> a;
     k += a;
   }

   cout << k/27;

} 