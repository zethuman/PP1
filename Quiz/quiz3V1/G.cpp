#include<iostream>
#include<sstream>
#include<map>
#include<algorithm>

using namespace std;

int main()
{
    map<string, string> mp;
    int n , m, k;
    string country, city;
    cin >> n;
    
    for(int i =0; i < n; i++)
    {
      cin >> country;
      cin >> k;
      for(int j = 0; j < k; j++)
      {
        cin >> k;
        mp[city] = country;
      }
    }

    cin >> m;
    for(int i = 0; i < m; i++ )
    {
      cin >> city;
      if(m[city] != "")
      cout << "Unknown";
      else cout << m[city] << endl;
    }
}