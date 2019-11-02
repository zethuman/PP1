#include<iostream>
#include<vector>
#include<algorithm>
#include<set>


using namespace std;

int main()
{
  set<string> v;
  
  string s,a,b;
  freopen("input.txt", "r", stdin);
  cin >> s;

  while(cin >> a)
  {
    v.insert(a);
    
  }
  
  size_t l = v.size();
  set<string>:: iterator it;
//  if(v.size() == s.size()){
//    v.erase(v.find(s));
//  }

cout << l << endl;
  for(it = v.begin(); it != v.end(); it++)
  {
    cout << *it << " ";
  }
}