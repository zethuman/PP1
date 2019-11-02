#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    char c;
    string s;
    cin >> c >> s;

    for(int i = 0; i < s.size(); i++)
    {
       if (s[i] != c)
       {
           cout << s[i];
       }
    }

  
}

