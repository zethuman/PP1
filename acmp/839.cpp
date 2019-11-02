#include<iostream>

using namespace std;

int main()
{
  string s;
  int k = 0;


  cin >> s;

  for(int i = 0; i < s.size(); i++)
  {
    if(s[i] == '0')
    {
      k = 1;
    }
    

  }

  if(k == 1)
  {
    cout << "NO";
  }
  else cout << "YES";
}