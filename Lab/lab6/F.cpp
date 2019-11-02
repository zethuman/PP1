#include<iostream>
#include <cmath>
using namespace std;

int str(string s, int n)
{
    int g = 0;
    for (int i = 0; i < s.size(); i++){
    if (s[i] >= '0' && s[i] <= '9')
    {
        g++;
    }}
    if (g >= n)
{
    cout << "YES";
}
else cout << "NO";
    
}

int main()
{
 string s;
 int n , g;

 cin >> s >> n;

 str(s , n);

 }