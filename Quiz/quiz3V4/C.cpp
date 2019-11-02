#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int sum = 0;
    
    for(int i = 0; i < s.size(); i++)
    if(isdigit(s[i]))
    {
      sum += s[i] - 48;
    }
    cout << sum;
}
