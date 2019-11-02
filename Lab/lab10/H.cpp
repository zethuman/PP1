#include<cmath>
#include <iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<sstream>
#include<algorithm>
//freopen("input.txt", "r", stdin);
using namespace std;

bool ispolindrome(vector<int> v)
{
    for(int i = 0; i < v.size() / 2; i++)
    {

            if(v[i] ==v[v.size() - 1 - i])
            {
                return true;
            }
    } 
    return false;
}


int main()
{
    int n,a;
    cin >> n;

    vector <int> v;

    for(int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }   
   
   sort(v.begin(),v.end());

do{
    if(ispolindrome(v) == true)
    {
       for(int i = 0; i < v.size(); i++)
       {
           cout << v[i] << " ";
       }
       return 0;
    }
  
}
while(next_permutation(v.begin(),v.end()));
   cout << "Impossible" << endl;
}