#include <iostream>
#include<cstring>
#include <algorithm>
using namespace std;

string s;

int main()
{
    
    cin >>s;

    for (int i = 0; i < s.size(); i++)
    {
       sort(s.begin(), s.end());

    }
    s.erase(s.begin(), s.end()-1);
    cout << s;
    

   
}