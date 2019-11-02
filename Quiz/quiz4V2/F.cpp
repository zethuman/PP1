#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
 int n;
 cin >> n;
 vector<int> v;
 int x;

 for(int i = 0; i < n ;i ++)
 {
   cin >> x;
   v.push_back(x);
 }  

  int k;
  cin >> k;
  reverse(v.begin(),v.end());

  fill (v.begin(),v.begin()+ k,0);
  
  reverse(v.begin() + k , v.end());

  for(int i =0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
}