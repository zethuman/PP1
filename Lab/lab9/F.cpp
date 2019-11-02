#include <iostream>
#include <algorithm>
#include <map>
#include <stack>
 using namespace std;
 int main(){

  string s;
  cin >> s;
  int cnt = 0;
    
  for(int i = 0; i < s.size(); i++){
    if (s[i] == '(')
      cnt++;
    else if (s[i] == ')'){
      cnt--;
      if(cnt < 0){
        cout << "NO";
        return 0;
      }
    }
  }
  if(cnt == 0)
    cout << "YES";
  else
    cout << "NO";
   return 0;
}