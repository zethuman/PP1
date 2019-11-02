#include<iostream>
#include<algorithm>
using namespace std;

int main ()
{
     
    string t  = "abcdefghijklmnopqrstuvwxyz";
    string s;
    cin >> s;
    
     
     sort(s.begin(), s.end());

    if (s != t)
    {
        cout << "No";
    }
    else cout << "Yes";
    

}