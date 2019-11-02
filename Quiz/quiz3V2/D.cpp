#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main()
{
    vector<int> v;
    int n, x;
    cin >> n;

    for (int i = 0; i < n; i++)
    {   
        cin >> x;
        v.push_back(x);
    }
    int k,  a , b;
    cin >> k;
    cin >> a >> b;
    
    v.erase(v.begin() + k - 1);
    v.erase(v.begin() + a - 1, v.begin() + b);
    
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
   
}