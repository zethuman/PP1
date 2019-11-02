#include<cmath>
#include <iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<sstream>
#include<algorithm>
#include<unordered_set>
//freopen("input.txt", "r", stdin);
using namespace std;

int main()
{
  int n,a;
  cin >> n;
  vector<int> v;
  

  for(int i = 0; i< n; i++){
      cin >> a;
      vector<int>:: iterator it = find(v.begin(), v.end(),a);
      if(it != v.end())
      continue;
      else v.push_back(a);
  }
      
  
  do{
          for(int i = 0; i < v.size(); i++)
          cout << v[i] << " ";
          cout << endl;    
  }
  while(next_permutation(v.begin(),v.end()));

}