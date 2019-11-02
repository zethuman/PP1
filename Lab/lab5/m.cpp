#include <iostream>
using namespace std;

int main()
{
    string s;
    char simvol;
    int j=0,a;
    cin >> s;
    cin>>simvol;
    cin >> a;
    for(int i=0 ; i < s.size(); i++)
    {
        if(s[i] == simvol)
            {j++;}
    }
    for ( int i = 0 ; i < s.size(); i++ )
        if(j == a)
        {
            cout << "YES"; break;
        }
     else {cout << "NO"; break;}
       
}