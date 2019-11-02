#include <iostream>
#include <cstring>
#include<sstream>
using namespace std;

string s,t;


int main ()
{
    cin >> s;
    int even = 0,odd = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(i % 2 == 0)
        {
           even += s[i] - 48 ;
        }
        else if(i % 2 != 0)
        {
            odd += s[i] - 48;
        }
    }

    if(even == odd)
    {
        cout << "YES";

    }
    else cout << "NO";
    
}