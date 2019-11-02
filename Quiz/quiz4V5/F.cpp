#include <cstdlib>
#include <iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
//freopen("input.txt", "r", stdin);
using namespace std;

map<char,int> mp;

int main()
{
    int n;
    string s;
    char c;
    
    cin >> n;
    int q;

    for(int i = 0; i < n; i++)
    {
        cin >> s >> c;
        mp[c]++;
    }
    map<char,int>:: iterator it;
    for(char c = 'A'; c <= 'C' ; ++c)
     {
         cout<< mp[c] << endl;
     }
}