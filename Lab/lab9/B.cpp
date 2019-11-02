#include <iostream>
#include<algorithm>
#include<vector>
#include<set>
 
using namespace std;
 
int main()
{
  vector<int> v;
  vector<int> v1;
  vector<int> v2;
  int n, a;
  
  cin >> n;
  for(int i = 0; i < n; i++)
  {
      cin >> a;
      v.push_back(a);
  }

  for(int i = 0; i < v.size(); i++)
  {
      if(v[i] % 2 == 0)
      {
          v1.push_back(v[i]);
          sort(v1.begin(),v1.end());
          reverse(v1.begin(),v1.end());
      }
      else if(v[i] % 2 != 0)
      {
          v2.push_back(v[i]);
          sort(v2.begin(),v2.end());
      }
  }

  for(int  i = 0; i < v1.size(); i++)
  {
      cout << v1[i] << " ";
  }
  for(int  i = 0; i < v2.size(); i++)
  {
      cout << v2[i] << " ";
  }
}