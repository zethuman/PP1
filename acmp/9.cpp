#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
   int n;
   cin >> n;
   int a[n];
   int sum = 0;
   int mult = 1;
   int maxi = 0;
   int mini = 1000000;
   int pos1;
   int pos2;

   for(int i = 0; i < n; i++)
   {
     cin >> a[i];
   }

   for(int i = 0; i < n; i++)
   {
     if(a[i] > 0)
     {
       sum+= a[i];
     }
   }

   for(int i = 0; i < n; i++)
   {
     if(a[i] > maxi)
     {
       maxi = a[i];pos1 = i;
     }
   }
   for(int i = 0; i < n; i++)
   {
     if(a[i] < mini)
     {
       mini = a[i];pos2 = i;
     }
   }
   if(pos2 < pos1)
   {
     swap(pos1,pos2);
   }
   for(int i = pos1+1; i <= pos2-1; i++)
   {
     mult*=a[i];
   }
  
   
      cout << sum << " " << mult;
}