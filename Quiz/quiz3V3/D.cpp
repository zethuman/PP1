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
   cin >> s;
    while(cin>>s){
      mp[s]++;
    }
    map<string,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
      if(it->second>1){
        cout<<it->first<<endl;
      }
    }

}