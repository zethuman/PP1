#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

struct Person{
   string date,name;
   string d,m,y;
   Person(string _name, string _date, string _d, string _m, string _y)
   {
      name = _name;
      date = _date;
      d = _d;
      m = _m;
      y = _y;
   }
};

bool cmp(Person a, Person b)
{
    if(a.y < b.y) return true;
    if(a.y == b.y && a.m < b.m) return true;
    if(a.y == b.y && a.m == b.m && a.d < b.d) return true;
    return false;
}


int main()
{
    
    string date,name;
    string d, m, y;
    char ch;
    vector<Person> v;
    int n,x;
    cin >> n ;
 
  for(int i = 0; i < n; i++)
  {
    cin >> name >> date;
    d = date.substr(0, 2);
    m = date.substr(3, 2);
    y = date.substr(6, 4);
    v.push_back(Person(name, date, d , m ,y));
    

  }

  sort(v.begin(), v.end(), cmp);
 
  
  cout << v[0].name << endl;
}