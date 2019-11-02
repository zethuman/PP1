#include <cstdlib>
#include <iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
//freopen("input.txt", "r", stdin);
using namespace std;

    map<string,int> mp;

    bool oneormore(int n)
    { 
        if(n == 1)
        {
            return true;
        }
    return false;
    }
    
    int main()
    {
        int n;
        string s;

        cin >> n;
        
        for(int i = 0; i < n; i++)
        {
            cin >> s;
            mp[s]++;
            if(oneormore(mp[s]) == true)
            {
                cout << "new user added"<< endl;
            }else  cout << "user already exists" << endl;
            
        }
    }