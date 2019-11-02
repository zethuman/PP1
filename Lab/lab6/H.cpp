#include<iostream>
#include <cmath>
#include<sstream>
using namespace std;

int cut(string n) 
{  
   int g = 0;
   int sum = 0;
   for(int i = 0; i < n.size(); i++)
   {
     if ((n[i] - 48) % 2 != 0)
   {
       g++;
   }
   }
   if (g == 0)
   {
       cout << "Valid";
   }
   else cout << "Not valid";
    
} 



int main()
{
 string n ;
 cin >> n;

cut(n); 

}