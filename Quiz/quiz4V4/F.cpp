#include<iostream>
#include<algorithm>
#include<cmath>
#include<sstream>

using namespace std;

int main()
{
  int n,m,p = 0;
  cin >> n >> m;
  int a[n][m];
  int b[n][m];

  for(int i = 0;i < n; i++){
    for(int j = 0; j < m; j++)
    {
      cin >> a[i][j];
    }
  }

  for(int i = 0;i < n; i++){
    for(int j = 0; j < m; j++)
    {
      if(i == 0 ){
         stringstream ss;
         ss << a[i][j];
         string s;
         ss >> s;
         string b = s;
         reverse(s.begin(),s.end());
         if(s == b)
         {
           p++;
         }
      }

      if( i == n - 1)
      {
         stringstream ss;
         ss << a[i][j];
         string k;
         ss >> k;
         string l = k;
         reverse(k.begin(),k.end());
         if(k == l)
         {
           p++;
         }
      }
    }
  }

   
   if(p == 2*m)
   {
     cout << "YES";
   }
   else cout << "NO";
}