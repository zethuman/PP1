#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

struct Person{
   string s;
   int sum;
   
   Person(string _s, int _sum)
   {
      s = _s;
      sum = _sum;
   }
};

int main()
{
  int n,m,mini = 1000000;
  int a = 0, b = 0, c = 0,sum = 0;
  vector <Person> v;
  
  string s;
  cin >> n >> m;
  int ar[m];

  for(int i = 0; i < n; i++)
  {
    cin >> s;
    for(int j = 0; j < m; j++)
    {
      cin >> ar[j];
      sum += ar[j];
     
    }
    v.push_back(Person(s,sum));
      if(sum < mini)
      {
        mini = sum;
      }
      sum = 0;
  }

  for(int i = 0; i < v.size(); i++)
  {
      if(mini == v[i].sum)
      {
        cout << v[i].s;
        break;
      }
  }
  
  



} 