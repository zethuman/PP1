#include<iostream>
#include<map>
#include<algorithm>

using namespace std;

int main()
{
  int maxi = 0;
  map<char,int> mp;
  char c;
  int n;

  while(cin >> c >> n)
  {
   mp[c] = max(mp[c],n);
  }
  for(map<char,int>:: iterator it = mp.begin(); it != mp.end(); it++)
  {
    cout << it-> first << " " << it-> second<< endl;
  }
  
}