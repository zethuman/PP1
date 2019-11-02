#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>

using namespace std;

map <string, int> mp;

int main()
{
   string s;
   freopen("input.txt", "r", stdin);
   int n, k ,g;
   cin >> n;
   for(int i = 0; i < n; i++){
      cin>> s >> k;
      mp[s]++;
    }
    map<string,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
      if(it->second>1){
        cout<<it->first<<endl;
        g++;
      }
    }
    if(g == 0)
    cout << "No";
  
} 