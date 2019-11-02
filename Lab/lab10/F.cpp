#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j <= n; j++)
        {
             v.push_back(j);
        }
    }
    sort(v.begin(), v.end());
    
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}