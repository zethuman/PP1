#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

struct Person{
   string surname,name;
   int math, pp1, ds;
   double a,sum;
   
   Person(string _surname, string _name, int _math, int _pp1, int _ds, double _sum,double _a)
   {
      surname = _surname;
      name = _name;
      math = _math;
      pp1 = _pp1;
      ds = _ds;
      sum = _sum;
      a = _a;
   }
};

int main()
{
    double a,sum;
    string surname,name;
    int math, pp1, ds;
    vector<Person> v;
    int n,x;
    cin >> n >> x;
 
  for(int i = 0; i < n; i++)
  {
    cin >> surname >> name >> math >> pp1 >> ds;
    v.push_back(Person(surname, name, math, pp1, ds,sum,a));
     v[i].sum += (v[i].math + v[i].pp1 + v[i].ds);  
     v[i].a = v[i].sum / 3;
  }
     

  for(int i = 0; i < v.size(); i++)
  {
      if(x < v[i].a)
      {
          cout << v[i].surname << " " << v[i].name << endl;
      }
  }
  


  

  
}