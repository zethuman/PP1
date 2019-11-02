#include<iostream>

using namespace std;

int main()
{
  string s;
  int a = 0,b = 0;
  int maxi = -1;
  
  
  while(cin >> s)
  {
    for(int i = 0; i < s.size(); i++){
    if(s[i] - 48 == 0)
    {
      b++;
    }
    else b = 0;
    

    if(b > maxi)
    maxi = b;
    }
  }
  cout << maxi;

}