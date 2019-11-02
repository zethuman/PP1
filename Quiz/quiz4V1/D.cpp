#include <cstdlib>
#include <iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
//freopen("input.txt", "r", stdin);
using namespace std;

map<string,int> mp;

int main()
{
    int n;
    string s;
    cin >> n;
    int q;

    for(int i = 0; i < n; i++)
    {
        cin >> s >> q;
        mp[s] += q;
    }
    map<string,int>:: iterator it;
    for(it = mp.begin();it != mp.end();it++)
    {
        cout << it->first << " " << it->second << endl;
    }
}