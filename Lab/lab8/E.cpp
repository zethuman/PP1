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
    int a , b;
    cin >> a >> b;

    v.erase(v.begin() + a, v.begin() + b + 1);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
   

   
    
}