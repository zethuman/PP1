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
    
    int x,y,d,k;
    int index = 0,maxi = 0;
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
    if(v[i].y == 1)
    {
      maxi = max(maxi,v[i].x);
    }
    else if(v[i].y == 0)
    {
      k++;
    }
  }

  if(k == n)
  {
    cout << "-1" << endl;
  }
  else if(k != n)
  {
  for(int i = 1; i <= v.size(); i++)
  {
    if(v[i].x == maxi)
    {
      index = i;
      break;
    }
  }

  cout << index + 1;
  }   
   



   
}