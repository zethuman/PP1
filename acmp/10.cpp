#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  long long int a,b,c,d;
  

  cin >> a >> b >> c >> d;

  for(int i = -100; i <= 100; i++)
  {
   
        if(a*i*i*i + b*i*i == 0-c*i - d)
        {
          cout << i << " " ;
        }
  }

 

} 