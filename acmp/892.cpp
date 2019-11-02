#include<iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  if(n == 12 or n == 1 or n == 2 )
  {
    cout << "Winter";
  }
  if(n >= 3 && n <= 5 )
  {
    cout << "Spring";
  }
  
   if(n >= 6 && n <= 8 )
  {
    cout << "Summer";
  }

   if(n >= 9 && n <= 11 )
  {
    cout << "Autumn";
  }
  if(n > 12 || n == 0 )
  {
    cout << "Error";
  }

}