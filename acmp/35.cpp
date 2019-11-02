#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

struct Auto{
   int x,y;
   int d;
   
   
   Auto(int _x, int _y, int _d)
   {
      x = _x;
      y = _y;
      d = _d;
   }

};

int main()
{
    
    int x,y,d;
    vector<Auto> v;
    int n;
    cin >> n ;
 
  for(int i = 1; i <= n; i++)
  {
    cin >> x >> y;
    v.push_back(Auto(x,y,d));
    
  }

  for(int i = 0; i < v.size(); i++)
  {
    v[i].d = 19*v[i].y + (v[i].x + 239)*(v[i].x + 366 )/ 2;
    cout << v[i].d << endl;
  }
   
}