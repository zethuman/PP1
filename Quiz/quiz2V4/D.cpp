#include <iostream>
#include<sstream>
#include <math.h>
#include<vector>

using namespace std;
 
int main()
{
     string s;
     cin >> s;

     for(int  i = 0 ; i < s.size(); i++)
     {   
         if (s[i] == 'Z')
         {
             s[i] = char(64);
         }
         if (s[i] == 'z')
         {
             s[i] = char(96);
         }
      }
      for(int  i = 0 ; i < s.size(); i++)
     {   
         s[i] = char(s[i] + 1);
     }

     cout << s;
}