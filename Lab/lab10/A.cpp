#include <cstdlib>
#include <iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<sstream>
#include<algorithm>
//freopen("input.txt", "r", stdin);
using namespace std;

int main()
{
   int n;
   cin >> n;
   int points[n + 1];
   string name[n + 1];

   for(int i = 0; i < n; ++i)
   {
       cin >> name[i];
       cin >> points[i];
   }
   sort(name,name+ n);
   sort(points ,points + n);
  

  for(int i = 0; i < n; ++i)
  {
  cout << name[i] << " "<< points[i] << endl;   
  }  
}
