#include<iostream>
 #include<vector>
// #include<set>
// #include<queue>
// #include<deque>
// #include<map>
#include<algorithm>
using namespace std;

int main()
{
    int cnt = 0;
    string s, b;
    cin >> s;
    b = s;
    
    int p;
  

    for(int i = 0; i < s.size(); i++)
    {
      if (s[i] >= '0' && s[i] <= '9')
      {
        cnt++;
      }
      if(b == s)
      {
          p = 1;
      }
      else if(b != s)
      p = 0;
    for(int j = s.size(); j >= 0 ; j--)
    {
        if(s[i] != b[j])
      {
          p = 1;
      }
      
      else if(s[i] == b[j])
      p = 0;
        
    }
    }
  
   if(s.size() <= 10 && cnt >= 3 && p == 1)
   {
     cout << "YES";
   }
   else cout << "NO";
  return 0;
}