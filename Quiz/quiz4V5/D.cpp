#include<iostream>
#include<algorithm>
#include<cmath>
#include<sstream>

using namespace std;

int main()
{
  int n,m,p = 0;
  cin >> n;
  int a[n][n];
  int b[n][n];

  for(int i = 0;i < n; i++){
    for(int j = 0; j < n; j++)
    {
      cin >> a[i][j];
    }
  }

  for(int i = 0;i < n; i++){
    for(int j = 0; j < n; j++)
    {
      if(i == j){
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
         cout << s << " ";
      }

      if(n - 1 == i + j)
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

   
   if(p == 2*n)
   {
     cout << "YES";
   }
   else cout << "NO";
}