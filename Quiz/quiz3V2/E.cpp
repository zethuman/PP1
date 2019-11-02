#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>

using namespace std;

 map<string, string> mp;

int main()
{
  int n; 
  cin >> n;
  string country, city;


  for(int i = 0; i < n; i++)
  {
    cin >> country >> city;
    mp[city] = country;
  }
 
 int m;
 cin >> m;
 
  for(int j = 0; j < m; j++)
  {
    cin >> city;
    cout << mp[city] << endl;
  }

}