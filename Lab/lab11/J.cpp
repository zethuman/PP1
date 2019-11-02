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
    int pos;
   
Point(long long _x, long long _y, long long _z, long long _sum, int _pos)
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
     if(a.sum < b.sum) return true;
     return false;
    
     
}

long long sum;
int pos;
int main()
{
    vector<Point> v;
    long long x;
    long long y;
    long long z;

    int n;
    cin >> n ;
 
  for(int i = 0; i < n; i++)
  {
    cin >> x >> y >> z ;
    v.push_back(Point(x,y,z,sum,pos));
  }
  
  int m;
  m = v.size();

  for(int i = 0; i < m; i++)
  {
     v[i].sum = v[i].x + v[i].y + v[i].z;
     v[i].pos = i + 1;
  }

  sort(v.begin(),v.end(),cmp);

  for(int i = 0; i < m; i++)
  {
     cout << v[i].pos << " ";
  }
  
}