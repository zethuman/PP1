#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

struct Person{
   string surname,date;
   int salary,age;
   
   Person(string _surname, int _salary, int _age, string _date)
   {
      surname = _surname;
      salary = _salary;
      age = _age;
      date = _date;
   }
};

int sum,average;

int main()
{
    string surname,date;
    int salary,age;
    vector<Person> v;
    int n,x,maxi = -1;
    cin >> n >> x;
 
  for(int i = 0; i < n; i++)
  {
    cin >> surname >> salary >> age >> date;
    v.push_back(Person(surname, salary,age,date));

  }
     
  for(int i = 0; i < v.size(); i++)
  { 
      sum += v[i].age;
      average = sum / n;
      maxi = max(maxi,v[i].salary);
  }
  for(int i = 0; i < v.size(); i++)
  {
      if(maxi == v[i].salary)
      {
          cout << v[i].surname << endl;
          break;
      }
  }
   
   cout << average << endl;

  for(int i = 0; i < v.size(); i++)
  {
     if(v[i].salary > x)
     {
         cout << v[i].surname << " ";

     }
  }
  

  
}