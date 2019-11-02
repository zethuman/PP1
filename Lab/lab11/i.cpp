#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

struct Point{
    long long x;
    long long y;
    long long z;
    long long sum;
    long long pos;
   
Point(long long _x, long long _y, long long _z, long long _sum, long long _pos)
   {
       x = _x;
       y = _y;
       z = _z;
       sum = _sum;
       pos = _pos;
   }
};

bool cmp(Point a, Point b)
{
    if(a.x < b.x) return true;
    else if(a.x == b.x)
    {
    if(a.y < b.y) return true;
    else if(a.y == b.y)
    {
    if(a.z < b.z) return true;
     return false;
    }
} return false;
}

int main()
{
    vector<Point> v;
    long long x;
    long long y;
    long long z;
    long long sum;
    long long pos;

    int n;
    cin >> n ;
 
  for(int i = 0; i < n; i++)
  {
    cin >> x >> y >> z ;
    v.push_back(Point(x,y,z,sum,pos));
  }
  
  sort(v.begin(),v.end(),cmp);
  
  for(int i = 0; i < v.size(); i++)
  {
     v[i].sum = v[i].x + v[i].y + v[i].z;
  }

  for(int i = 0; i < v.size(); i++)
  {
     cout << v[i].sum << endl;
  }
  
}