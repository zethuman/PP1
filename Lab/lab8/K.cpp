#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main()
{
    vector<int> v;
    int n, x;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {   
        cin >> x;
        v.push_back(x);
    }
    int a,sum = 0;
    cin >> a ;

    sort(v.begin() , v.end());
    reverse(v.begin() , v.end());
    
 
    for (int i = 0; i < a ; i++)
    {
       
        sum = sum + v[i];
    }
   
        cout << sum << " " ;


   
    
}