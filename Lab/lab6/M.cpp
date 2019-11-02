#include<iostream>
#include <cmath>
#include<algorithm>
using namespace std;

int cut(int n) 
{    
  int s[n];
  for (int i = 1; i <= n; i++)
  {
    cin >> s[i];
  }  
  for (int i = n; i >= 1; --i)
  
{
    cout <<  s[i ] << " ";
  }  
  
  
} 

int main()
{
 
 int n;
 cin >> n;

cut(n); 

}