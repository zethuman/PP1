#include<iostream>
#include<string>

using namespace std;

int main()
{
  string s;
  cin >> s;
  int temp = 0;

  for(int i = 0; i < s.size(); i++)
  {
    if(s[i] == 'a')
    {
      if(s[i + 1] == 'b')
      {
        if(s[i + 2] == 'b')
        {
          if(s[i + 3] == 'a')
          {
            temp ++;
          }
        }
      }
    }
  }

  cout << temp;
}