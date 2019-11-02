#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
  int n;
  string s,b;

  cin >> n >> s;

  s.erase(s.begin()+n -1);

  cout << s;
}