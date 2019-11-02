#include<iostream>

using namespace std;

int main()
{
  string s;

  cin >> s;



  int a = s[0] + s[1] + s[2];
  int b = s[3]+ s[4] + s[5];

 

    if(a == b)
    {
      cout << "YES";
    }

    else cout << "NO";
  
}