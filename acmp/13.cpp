#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
  {
   string s,b;
   int a,k;
   cin >> s >> b;

   for(int i = 0; i < s.size(); i++)
   {
     if(s[i] == b[i])
     {
         a++;
     }
     if(s[i] != b[i])
     {
         swap(s[i],b[i]);
         if(s[i] == b[i])
         {
             k++;
         }
     }
    
   }
    
    

   cout << a << " " << k-a; 
    
  }