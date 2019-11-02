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

bool cmp(vector<int> a,vector<int> b)
{
    int suma = 0;
    int sumb = 0;
    for(int i = 0; i < a.size(); ++i)
     suma += a[i];
    for(int j = 0; j < b.size(); ++j)
     sumb += b[j];
     if(suma > sumb)
     return false;
     if(suma < sumb)
     return true;
     if(a.size() > b.size())
     return false;
     if(a.size() < b.size())
     return true;
     int n = a.size();
     for(int i = 0; i < n; ++i)
     {
         if(a[i] > b[i])
         return false;
         if(a[i] < b[i])
         return true;
     }
     return false;
    }

int main()
{
   int n;
   cin >> n;
   vector<int> v[n];

   for(int i = 0; i < n; ++i)
   {
       int m;
       cin >> m;
       for(int j = 0; j < m; ++j)
  {
    int x;
    cin >> x;
    v[i].push_back(x);
  }  
   }
   sort(v,v+n,cmp);
   
   for(int i = 0; i < n; ++i)
   {
       for(int j = 0; j < v[i].size(); ++j)
       {
           cout << v[i][j] << " ";
       }cout << endl;
   }
   
   return 0;
}
