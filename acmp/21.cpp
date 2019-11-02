#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
  int maxi = -1,mini = 1000000;
  vector<int> v;
  int x;
  

    while(cin >> x){

    v.push_back(x);
    }

  for(int i = 0; i < v.size(); i++)
  {
     if(v[i] > maxi)
     maxi = v[i];
  }

  for(int i = 0; i < v.size(); i++)
  {
     if(v[i] < mini)
     mini = v[i];
  }
  cout << maxi - mini;
}