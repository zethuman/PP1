#include <iostream>
#include <algorithm>
#include <set>

using namespace std;



int main(){
  
  set<int> v;
  int a;
  

  while(true){
  cin >> a;
  if(a == 0) break;
  v.insert(a);  
  }

  int maxi = 0;
  for(set<int>:: reverse_iterator i = v.rbegin(); i != v.rend(); i++)
  {
      if(*i > maxi)
      maxi = *i;
  }
   
   cout << maxi;

}