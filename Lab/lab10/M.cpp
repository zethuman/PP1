#include<iostream>
#include<algorithm>
#include<map>

using namespace std;
int sum;
int main()
{
    map<string,double> mp;
    double x;
    string s;
        
        int n;
            cin >> n;
    for(int j = 0; j < n; j++)
    {
             int m;
                 cin >> m;

    for(int i = 0; i < m; i++)
    {
        cin >> s >> x;
        pair<string,double> p = make_pair(s,x);
        mp[p.first] += x;
        mp.insert(p);
        sum += x;
 }
    }
    
    
    map<string,double> :: iterator it;
    for(it = mp.begin(); it != mp.end(); it++)
    {
        it->second =  it->second * 100 / sum;
        cout << it->first << " " << it->second << endl;
       
        
    }
      
}