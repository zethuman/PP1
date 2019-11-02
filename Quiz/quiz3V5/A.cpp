#include<iostream>
#include<algorithm>
#include<sstream>
#include<cmath>
#include<iomanip>
#include<map>

using namespace std;

int main()
{
     map<char,int> m;
     string x;
     
    
     while(cin >> x)
     {
         char c = tolower(x[0]);
         m[c]++;
     }
     for(char c = 'a'; c <= 'z' ; ++c)
     {
         cout << m[c] << endl;
     }
}