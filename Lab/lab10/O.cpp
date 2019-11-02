#include <iostream>
#include <map>
#include <vector>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    map<pair<pair<string,int>,pair<string,int> >, int> mp;
    cin>>n;
    
    string n1,n2;
    int s1;
    int s2;

    for(int i = 0; i < n; i++)
    {
        cin >> n1 >> s1 >> n2 >> s2;
        mp[make_pair(make_pair(n1,s1),make_pair(n2,s2))] = s1 + s2;
    }
    
    for(map<pair<pair<string,int>,pair<string,int> >, int>:: iterator it = mp.begin(); it != mp.end(); it++)
    {
       cout << ((*it).first.first.first) << " and " << ((*it).first.second.first) << "  " << (*it).second << endl;
    }

}
