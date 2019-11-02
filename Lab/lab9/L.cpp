#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
 
 
int main() 
{
            int  n, x,y;
            vector<int> v;          
            cin >> n;
            pair <int, int> a[n];
            
            for(int i = 0; i < n; i++)
            {
              cin >> x >> y;
              a[i] = make_pair(x,y);
            //cin>>P[i].first>>P[i].second;
            }
            int sum = 0;
            for(int i = 0; i < n; i++)
            {
              sum = a[i].first + a[i].second;
              v.push_back(sum);
            }
      if(v.size() == n)
      {
      vector<pair<int,int>> V;
      for(int i = 0; i < v.size(); i++)
      {
          pair<int,int> P=make_pair(v[i],i + 1);
          
          V.push_back(P);
      }
      sort(V.begin(),V.end());
      for(int i = 0; i < v.size(); i++) 
       cout<< V[i].second << " " ;
      }
      }