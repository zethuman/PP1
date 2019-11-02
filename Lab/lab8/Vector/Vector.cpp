vec.begin()                  // 1st
vec.begin()+1                // 2nd
// ...
vec.begin()+(i-1)            // ith
// ...
vec.begin()+(vec.size()-1)   // last


// 1
#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> v;
  
  for(int i = 0; i < 10; i++)
    v.push_back(i);
  
  for(int i = 0; i < v.size(); i++){
    // cout << v[i] << " ";
    cout << v.at(i) << " ";
  }

  return 0;
}
// output:
// 0 1 2 3 4 5 6 7 8 9 


// 2
#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> v;
  int a; // value

  for(;;){
    cin >> a;
    if(a == 0)
      break;
    v.push_back(a);
  }

  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  

  return 0;
}
// input :
// 1 2 3 4 5 0
// output:
// 1 2 3 4 5


// 3
#include <iostream>
#include <vector>

using namespace std;


bool cmp(int a, int b){
  return a > b;
}

int main(){

  vector<int> v;

  v.push_back(5);
  v.push_back(7);
  v.push_back(2);
  v.push_back(10);

  sort(v.begin(), v.end(), cmp);
  // reverse(v.begin(), v.end());

  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";


  return 0;
}
// output:
// 5 7 2 10

// 4

#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> v;

  v.push_back(5);
  v.push_back(7);
  v.push_back(2);
  v.push_back(10);
  v.empty() <=> v.size() == 0
  cout << v.empty() << " " << v.size();

}
// output:
// ?

// 5
#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> v;

  v.push_back(5);
  v.push_back(7);
  v.push_back(2);
  v.push_back(10);

  // v.front() <==> v.at(0);
  // v.back() <==> v.at(v.size() - 1);
    
  cout << v.front() << " " << v.back();

  return 0;
}
// output:
// 5 10


// 6
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> v;

  v.push_back(5);
  v.push_back(7);
  v.push_back(2);
  v.push_back(10);
  for (int i = 0; i < v.size(); i++)
    cout << v.at(i) << " ";
  
  cout << endl;
  
  // v.erase(v.begin()+1);
  v.erase(v.begin() + 1, v.begin() + 3);

  for(int i = 0; i < v.size(); i++)
    cout << v.at(i) << " ";

  cout << endl;

  return 0;
}
// output: 
// 5 7 2 10
// 5 10


// 7
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> v;

  v.push_back(5);
  v.push_back(7);
  v.push_back(2);
  v.push_back(10);
  
  v.clear(); // <==> v.erase(v.begin(), v.end());

  cout << v.size() << endl;  


  return 0;
}
// output 0.



// 8
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> v;

  v.push_back(5);
  v.push_back(7);
  v.push_back(2);
  v.push_back(10);
  
  v.clear(); // <==> v.erase(v.begin(), v.end());

  cout << v.size() << endl;  


  return 0;
} 

 // output 0

 // 10 
 #include <iostream>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

int main()
{
  set<int> s;
  s.insert(20);
  s.insert(30);
  s.insert(10);
  s.insert(10);
  s.insert(40);
  s.insert(50);
  s.insert(20);


  set<int>::iterator it;
  for (it = s.begin(); it != s.end(); it++)
    cout << *it << " ";

  return 0;
}
// output:
// 10 20 30 40 50

// plan

PPI Lecture 10

1. What is STL?
2. Algorithms, Containers, Functions, Iterators
3. Containers
    1. vector
    2. queue
    3. stack
    4. set
    5. map
4. What is Vector?
    1. begin(), end()
    2. size()
    3. empty()
    4. at(index)
    5. front(), back()
    6. push_back(elm)
    7. erase(iterator pos), erase(iterator begin, iterator end)
    8. clear()
5. What is Set?
    1. begin(), end()
    2. size()
    3. empty()
    4. insert(elm)
    5. clear()
    6. find(elm)
    7. erase(iterator pos), erase(elm)
    8. remove all elements less than < 30