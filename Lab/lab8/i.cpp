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
    int a, g = 0;
    cin >> a ;
    
     for (int i = 0; i < v.size(); i++){
    if (v[i] == a)
    {
        g++;
    }
     }
      
    if (g != 0){
        cout << "Yes";
    }
    else cout << "No";


   

   
    
}