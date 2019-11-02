#include <iostream>
#include<sstream>
#include <math.h>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int s = 0;

    while(n > 0)
    {
      s = s + (n % 2);
      n = (n / 2);
    }

    cout << s;



}