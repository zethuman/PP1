#include <cstdlib>
#include <iostream>
#include<algorithm>
#include<vector>
#include<set>
#include <map>
 
using namespace std;
 
int main()
{
  map<int,int> mp;
  int n,x,a;
  int cnt = 0;
  
  cin >> n;
  for(int i = 0; i < n; i++)
  {
      cin >> x;
      mp[x]++;
  
  map<int,int>:: iterator it;
  for(it = mp.begin(); it != mp.end(); it++)
  {
      if(it->second == 2)
      {
          cnt ++;
          it->second = 0;
      }
     
  }}
  cout << cnt << endl;
}