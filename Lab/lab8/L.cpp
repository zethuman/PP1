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
    int g = 0;
   

    sort(v.begin() , v.end());

    for (int i = 0; i < v.size(); i++)
    {
        if ( v[i] != v[i + 1])
   {
       g++;
   }
    }
   cout << g;

   
    
}