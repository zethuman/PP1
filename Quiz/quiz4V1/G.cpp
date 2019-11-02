#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

int main()
{
  int n,x,k;
  cin >> n;
  vector<int> v;
  int sum = 0;

  for(int i =0; i < n; i++)
  {
    cin >> x;
    v.push_back(x);
  }

  cin >> k;

  for(int i =0; i < v.size() - 1; i++)
  {
    sum += (abs(v[i] - v[i + 1]));
  }
  
  double time;

  time = sum / k;

  cout  << fixed << setprecision(2) << time;
}