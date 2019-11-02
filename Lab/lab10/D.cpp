#include <cstdlib>
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

int main()
{
   int n,x,a;
   cin >> n >> x;
   vector<int> v;
   
   for(int i = 0; i < n; i++)
   {

       cin >> a;
       v.push_back(a);
   }
   rotate(v.begin(),v.begin() + x,v.end());
   reverse(v.begin(),v.end());
   for(int i = 0; i < v.size(); i++)
   {
       cout << v[i] << " ";
   }
}
