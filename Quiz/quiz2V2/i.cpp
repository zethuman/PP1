#include<iostream>
using namespace std;


int main()
{
   int x, y;
   cin >> x >> y;

   if (x % 3 == 0 || y % 3 == 0 || (x + y) % 3 == 0)
   {
       cout << "Yes";

   }
   else cout << "No";
   
    
}

