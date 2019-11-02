#include<iostream>

using namespace std;


int main()
{
   string s;
   int a = 0, b = 0, c = 0, d= 0;

   cin >> s;

   for(int i = 0; i < s.size(); i++)
   {
     if(s[i]- 48 == 8)
     {
       a = a + 2;
     } 
     if(s[i] - 48 == 0)
     {
       b++;
     }
     if(s[i] - 48 == 9)
     {
       c++;
     }
     if(s[i] - 48 == 6)
     {
       d++;
     }
   }

   cout << a + b + c + d;
}