#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

struct Person{
   int x,y,r;
   double dis;
   
   
   Person(int _x, int _y, int _r, double _dis)
   {
      x = _x;
      y = _y;
      r = _r;
      dis = _dis;
   }

};

int main()
{
    
     int x,y,r;
     double dis;
    vector<Person> v;
    int n,a,b;
    cin >> n ;
 
  for(int i = 1; i <= n; i++)
  {
    cin >> x >> y >> r;
    v.push_back(Person(x,y,r,dis));
  }
  cin >> a >> b;
     
  
    // cout << v[a - 1].x*v[a - 1].x << " " <<   v[b - 1].x*v[b - 1].x << " " << v[a - 1].y*v[a - 1].y << " " <<  v[b - 1].y*v[b - 1].y ;
   
    dis = sqrt(((v[b - 1].x - v[a - 1].x)* (v[b - 1].x -v[a - 1].x)) + ((v[b - 1].y - v[a - 1].y)* (v[b - 1].y -v[a - 1].y)));

    
 

  if(dis <= v[a - 1].r + v[b -1].r)
  {
      cout << "YES";
  }
  else cout << "NO";
  
}