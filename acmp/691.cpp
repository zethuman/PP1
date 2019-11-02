#include<iostream>

using namespace std;

int main()
{
  int n;
  int cnt = 0;
  cin >> n;
  string s;

  for(int i = 0; i < n; i++)
  {
    cin >> s;
  }
  
  for(int i = 1; i <= s.size(); i++)
  {
  if(s.size() == 6)
  {
    if(s[1] == 'A' or s[1] == 'B' or s[1] == 'C' or s[1] == 'E' or s[1] == 'H' or s[1] == 'K' or s[1] == 'M' or s[1] == 'O' or s[1] == 'P' or s[1] == 'T' or s[1] == 'X' or s[1] == 'Y')
    {
      cnt++;
    }
    if(s[2] >= 0 && s[2] <= 9)
    {
      cnt++;
    }
    if(s[3] >= 0 && s[2] <= 9)
    {
      cnt++;
    }
    if(s[4] >= 0 && s[4] <= 9)
    {
      cnt++;
    }
     if(s[6] == 'A' or s[6] == 'B' or s[6] == 'C' or s[6] == 'E' or s[6] == 'H' or s[6] == 'K' or s[6] == 'M' or s[6] == 'O' or s[6] == 'P' or s[6] == 'T' or s[6] == 'X' or s[6] == 'Y')
  {
    cnt++;
  }
  }
  
  
  else cout << "No";
  }

   if(cnt == 6)
   {
     cout << "Yes";
   }
   else cout << "No";

}