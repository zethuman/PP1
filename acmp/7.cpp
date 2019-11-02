#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
  int maxi = -1;
  vector<signed long long> v;
  signed long long x;
  
freopen("input.txt", "r", stdin);
    while(cin >> x){

    v.push_back(x);
    }

  for(int i = 0; i < v.size(); i++)
  {
     if(v[i] > maxi)
     maxi = v[i];
  }
  cout << maxi;
}