#include<iostream>
#include <string>
using namespace std;

int main ()
{
    string s;
    cin >> s;
    int a = 0, b = 0;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            a++;
        }
    }
    
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            b++;
        }
    }

    cout << b << " " << a;
}
