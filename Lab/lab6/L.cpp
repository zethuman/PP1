#include<iostream>
#include <cmath>
#include<sstream>
using namespace std;

bool cut(string s , int n) 
{  
   int g = 0;
   for(int i = 0; i < s.size(); i++)
   {
     if ( s[i] >= '0' && s[i] <= '9')
   {
       g++;
   }
   }
   cout << g << " " ;
   if (g > n)
   {
       return true;
   }else 
   return false;
} 



int main()
{
 string s ;
 int n;
 cin >> s;
 cin >> n;



if (cut(s , n)) 

   {
       cout << "Valid";
   }
   else cout << "Not valid";

}