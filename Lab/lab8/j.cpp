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
    int maxi = 0, mini = 1000000;
    
     for (int i = 0; i < v.size(); i++){
    if (v[i] > maxi)
    {
        maxi = v[i];
    }
    if (v[i] < mini)
    {
        mini = v[i];
    }
     }
      
      cout << maxi - mini << " ";


   

   
    
}