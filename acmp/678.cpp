#include<iostream>

using namespace std;

int main()
{
   string s;
   int a = 1,b = 0,c = 0;

   cin >> s;

   for(int i = 0; i < s.size(); i++)
   {
     if(s[i] == 'C')
     {
       swap(a,c);
     }
     if(s[i] == 'A')
     {
       swap(a,b);
     }
     if(s[i] == 'B')
     {
       swap(c,b);
     }
   }

   if(a == 1)
   {
     cout << 1;
   }
   if(b == 1)
   {
     cout << 2;
   }
   if(c == 1)
   {
     cout << 3;
   }


}