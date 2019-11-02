#include <iostream>
#include<sstream>
#include <math.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int sum;
    for(int i = 0; i < s.size() ; i++)
    {
         sum = s[i] + sum;
    }
    cout << char (2847 -  sum);


}