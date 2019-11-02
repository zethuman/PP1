#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    map<int,int> mp;
    vector<int> v;

    int n,x;
    int maxi = 0,maxi2 = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
        sort(v.begin(), v.end());
        for(int i  =0 ; i < v.size(); i++){
        pair<int,int> p = make_pair(i,v[i]);
        
        mp.insert(p);
    }}

    for(map<int,int>:: iterator it = mp.begin(); it != mp.end(); it++)
    {
        if(it->second > maxi)
        {
            maxi2 = maxi;
            maxi = it->second;
        }
    }

    cout << maxi2;
}