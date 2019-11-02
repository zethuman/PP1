// reverse of vector
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    vector<int> v;
   
    for(int i = 0; i < n; i++){
      
      cin >> a;
      v.push_back(a);
    }

    
    reverse(v.begin(), v.end() );

    for(int i = 0; i < n; i++)
    cout << v[i] << " ";
}