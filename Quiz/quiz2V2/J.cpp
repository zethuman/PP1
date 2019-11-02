#include<iostream>
using namespace std;


int main()
{
   int a, b, c, d;
   cin >> a >> b >> c >> d;

   if (a == c*2 && b == d || a == c && b == d * 2 || c == a*2 && b == d || a == c && d == b * 2)
   {
       cout << "Yes";

   }
   else cout << "No";
   
    
}

