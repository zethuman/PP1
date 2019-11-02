#include<iostream>
#include<cmath>
#include<vector>
#include<map>
#include<iomanip>
#include<algorithm>

using namespace std;

int main()
{
     int n;
     cin >> n;
     int a[n];
     vector<int> v;
     vector<int> ve;

     for(int i =0 ; i < n; i++)
     {
         cin >> a[i];
     }
     for(int i =0 ; i < n; i++)
     {
         if(a[i] % 2 == 0)
         {
             v.push_back(a[i]);
         }

         if(a[i] % 2 != 0)
         {
             ve.push_back(a[i]);
         }
     }
     for(int i = 0; i < ve.size(); i++)
     {
         cout << ve[i] << " ";
     }
cout << endl;
     for(int i = 0; i < v.size(); i++)
     {
         cout << v[i] << " ";
     }
     cout << endl;
     if(v.size() >= ve.size())
     {
         cout << "YES";
     }
     else cout << "NO";
    
}