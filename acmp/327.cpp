#include<iostream>
#include<sstream>
#include<vector>

using namespace std;

int main()
{
  string s;
  vector<int> v;
  int n,b = 0,t = 0;
  int l = 0;
  cin >> n;
  int a[n];

  for(int i = 0; i < n; i++)
  {
    cin >> s;
  
  if(s[5] == '9')
  {
     t = s[3] - 48 + s[4]  - 48;
  }
  
  else if(s[5] != '9')
  {
      t = s[3] - 48 + s[4]  - 48 + s[5] - 47;
  }
  int a = s[0] - 48 + s[1] - 48 + s[2] - 48;
  int b = s[3] - 48 + s[4]  - 48 + s[5] - 49;

  int y = s[0] - 48  + s[1] - 48 + s[2] - 48;
  
   if(a == b || t == y)
    {
      l = 1;
    }

    else l = 0;

   v.push_back(l);


  }
  
  for(int i = 0; i < v.size(); i++)
  {
     if(v[i] == 1)
     {
       cout << "Yes" << endl;
     }
     else cout << "No" << endl;
  }
  
}