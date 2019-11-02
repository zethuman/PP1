#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
  string s;
  freopen("input.txt", "r", stdin);
  while(getline(cin,s))
  {
    int n;
    cin >> n;
    s.erase(s.begin(),s.begin()+n);
  }
  cout << s;
}