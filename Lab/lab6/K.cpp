#include<iostream>
#include <cmath>
#include<sstream>
using namespace std;

int cut(string n) 
{  
   int sum = 0;
   for(int i = 0; i < n.size(); i++)
   {
     sum = sum + n[i] - 48;
   }

   cout << sum;
    
} 



int main()
{
 string n ;
 cin >> n;

cut(n); 

}