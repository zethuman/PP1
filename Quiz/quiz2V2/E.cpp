#include<iostream>
#include<string>
using namespace std;


int main()
{
    string s;
    cin >> s;
    int p = 0;

    for(int i = 0; i < s.size(); i++)
    {
        if(s.size() >= 3 && s.size() <= 15 && s[0] >= 'A' && s[0] <= 'Z' && s[i] != 'A' && s[i] != 'Z')
        {
    {
     p++;
    }
            
        }
    }   
    if( p != 0 )
        {
            cout << "Hi" << ", " << s;
        }
        else cout << "Invalid name"; 
}

