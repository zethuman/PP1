#include<iostream>
#include<cmath>

using namespace std;

int main()
{
   int a,b;
   cin >> a >> b;
   int x = 0, y = 0;

   for(int i = 0; i <= 1000; i++)
   {
     for(int j = 0; j <= 1000; j++)
     {
       if(i + j == a)
       {
         if(i*j == b)
         {
           x = i; y = j;
           break;
         }
         break;
       }
     }
   }
   cout << y << " " << x;
 
} 