#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

struct Person{
   string surname,name;
   double gpa;
   
   
   Person(string _surname, string _name, double _gpa)
   {
      surname = _surname;
      name = _name;
      gpa = _gpa;
   }

};


bool cmp(Person a, Person b)
{
    if(a.gpa == b.gpa)
    return true;
    return false;
}

bool gr(Person a, Person b)
{
    if(a.name == b.name)
    return true;
    return false;
    if(a.surname == b.surname)
    return true;
    return false;
}

int main()
{
    
    string surname,name;
    double gpa;
    vector<Person> v;
    int n,x,y;
    cin >> n ;
 
  for(int i = 1; i <= n; i++)
  {
    cin >> surname >> name >> gpa;
    v.push_back(Person(surname, name, gpa));
  }
  cin >> x >> y;
     
 
  if(v[x-1].name == v[y-1].name &&  v[x-1].surname == v[y-1].surname && v[x-1].gpa == v[y-1].gpa)
  {
      cout << "YES";
  }
  else cout << "NO";
  


  

  
}