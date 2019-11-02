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
    if(a.gpa < b.gpa)
    return true;
    return false;
}

int main()
{
    string surname,name;
    double gpa;
    vector<Person> v;
    int n;
    cin >> n ;
 
  for(int i = 0; i < n; i++)
  {
    cin >> surname >> name >> gpa;
    v.push_back(Person(surname, name, gpa));
     
  }
     
  sort(v.begin(), v.end(),cmp);
  for(int i = 0; i < v.size(); i++)
  {
          cout << v[i].surname << " " << v[i].name << endl;
  }
  


  

  
}