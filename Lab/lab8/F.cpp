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
    int k , a;
    cin >> k >> a;

    v.insert(v.begin() + k , a);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
   

   
    
}