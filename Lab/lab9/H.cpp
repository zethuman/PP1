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
  set<string> st;
  string s;
  int n;
  
  cin >> n;
  pair<string,int> p;
  for(int i = 1; i <= n; i++)
  {
      cin >> s;
      pair<string,int> p = make_pair(s,i);
      mp.insert(p);
  }
      map<string,int>:: iterator it;

      for(it = mp.begin(); it != mp.end(); it++)
      {
          cout << it->first << " " << it->second << endl;
      }
  
}