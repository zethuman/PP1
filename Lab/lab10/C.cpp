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
   int n,a,g;
   cin >> n;
   vector<int> v;
   vector<int> v1;

   for(int i = 0; i < n; i++)
   {
       cin >> a;
       v.push_back(a);
       v1.push_back(a);
   }
   reverse(v.begin(), v.end());
   for(int i = 0; i < v.size(); i++)
   {
       stringstream ss;
       ss << v[i];
       ss >> g;
    
    if (v1[i] != g){
    cout << "Instead of " << v1[i] << " here was " << g << endl;
   }else cout << "OK" << endl;
}
}
