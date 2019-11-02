#include <cstdlib>
#include <iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
//freopen("input.txt", "r", stdin);
using namespace std;
 
int main()
{
  map<string ,int> mp;
  string s;
  int cnt;
  int n;
  
  cin >> n;

  for(int i = 0; i < n; i++)
  {
      cin >> s;
      mp[s]++;
  }
      map<string,int>:: iterator it;

      for(it = mp.begin(); it != mp.end(); it++)
      {
          if(it->second == 3)
          cnt++;
          it->second = 0;
      }
  
  cout << cnt << endl;
}