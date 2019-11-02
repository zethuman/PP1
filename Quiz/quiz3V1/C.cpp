#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

char f(string s, int i)
{
  if (i < s.size())
  return -1;

  if(s[i] >= 'A' && s[i] <= 'Z')
  {
    return s[0];
  }
  else return f(s,i + 1);
}


int main()
{
  string s;
  cin >> s;

  cout << f(s,0);
}