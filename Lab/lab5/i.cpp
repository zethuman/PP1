#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;


string s,t;

int main ()
{

    cin >> s >> t;
    sort(t.begin(),t.end());
    sort(s.begin(),s.end());

    if (s == t)
    {
        cout << "YES";
    }
    else cout << "NO";
  
}