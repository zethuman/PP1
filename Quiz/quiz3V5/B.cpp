#include<iostream>
#include<algorithm>
#include<sstream>
#include<cmath>
#include<iomanip>
#include<map>

using namespace std;

bool f(int x)
{
    if(x == 1)
    return false;
    int cnt = 0;

    for(int i = 1; i * i<= x; i++)
    {
        if(x % i == 0)
        cnt++;
    }
    if(cnt == 2) return true;
    return false;
}

int main()
{
    map<int,int> m;
    
    freopen("input.txt", "r", stdin);    
    int x;
    while(cin >> x)
    {
        if(f(x) == true)
           {        m[x]++;}
    }
  for(map<int,int> :: iterator it = m.begin();it != m.end(); it++)
  {
      pair<int,int> p = *it;
      if(p.second > 1)
      {
          cout << p.first << " ";
      }
  }
}