#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
  string s;
  cin >> s;

  string b = s;

  reverse(s.begin(),s.end());

  if(b == s)
  {
    cout << "YES";
  }
  else cout << "NO";
}