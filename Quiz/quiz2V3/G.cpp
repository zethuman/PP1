#include <iostream>
#include<sstream>
#include <math.h>
#include<string>
 
using namespace std;
 
int main()
{
  string s;
  cin >> s;
  int g = 0;

  for(int i = 0; i < s.size(); i++)
  {
      if (s[i] >= '0' && s[i] <= '9' && s[0] != '0' )
      {
          g++;
      }
      if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z')
      {
          g --;
      }
  }


  if (g == s.size())
  {
      cout << "Valid";
  }
  else cout << "Invalid";
}