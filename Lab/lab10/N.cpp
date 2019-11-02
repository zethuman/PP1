#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<iomanip>

using namespace std;

struct Point{
    long long x;
    long long y;
    long long z;
    int k;
    long long sum;
    long long pos;
    double summa;
   
Point(long long _x, long long _y, long long _z, int _k, long long _sum, double _summa)
   {
       x = _x;
       y = _y;
       z = _z;
       k = _k;
       sum = _sum;
       summa = _summa;
      
   }
};

int main()
{
    vector<Point> v;
    long long x;
    long long y;
    long long z;
    long long sum;
    double itog;
    int com;
    double  gpa;
    double summa;
    int k;

    int n;
    cin >> n ;
 
  for(int i = 0; i < n; i++)
  {
    cin >> x >> y >> z >> k ;
    v.push_back(Point(x,y,z,k,sum,summa));
  }
  
  
  
  for(int i = 0; i < v.size(); i++)
  {
     v[i].sum = v[i].x + v[i].y + v[i].z;
     
    if((v[i].x + v[i].y) >= 30 && v[i].z >= 20){
     if(v[i].sum <= 100 && v[i].sum >= 95)
     {
       v[i].summa =v[i].k *4.00000925;
     }
      
   if(v[i].sum <= 94 && v[i].sum >= 90)
  {
       v[i].summa = v[i].k *3.66667425;
  }
   if(v[i].sum <= 89 && v[i].sum >= 85)
  {
       v[i].summa = v[i].k *3.33333925;
     }
   if(v[i].sum <= 84 && v[i].sum  >= 80)
  {
       v[i].summa = v[i].k *3.00000426;
     }
   if(v[i].sum <= 79 && v[i].sum >= 75)
 {
       v[i].summa = v[i].k *2.66666925;
     }
   if(v[i].sum <= 74 && v[i].sum >= 70)
  {
       v[i].summa = v[i].k *2.33333425;
     }
   if(v[i].sum <= 69 && v[i].sum >= 65)
  {
       v[i].summa = v[i].k *1.99999925;
     }
   if(v[i].sum <= 64 && v[i].sum >= 60)
 {
       v[i].summa = v[i].k *1.66666626;
     }
   if(v[i].sum <= 59 && v[i].sum >= 55)
  {
       v[i].summa = 1.33332925*v[i].k;
     }
   if(v[i].sum <= 54 && v[i].sum >= 50)
 {
       v[i].summa = v[i].k*0.99999425;
     }
   if(v[i].sum <= 49 && v[i].sum >= 0)
  {
       v[i].summa = 0;
     }
    }
    else v[i].summa = 0;
     itog += v[i].summa;
     com += v[i].k;
  }
  
  gpa = itog / com; 
  
  cout << gpa;
  
}