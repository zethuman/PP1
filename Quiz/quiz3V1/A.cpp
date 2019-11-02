#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main(){
  
  vector<int> v;
  int a;

  while(true){
  cin >> a;
  if(a == 0) break;
  v.push_back(a);  
  }
  
  sort(v.begin(), v.end() );

 for(int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";  
  }
  return 0;
}