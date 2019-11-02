#include<iostream>
#include<algorithm>
#include<deque>
#include<queue>

using namespace std;

deque<int> d;
queue<int> q;
int main()
{
  char c;
  int n;
  int sum = 0;
  
  
  while(true){
   cin >> c;
   if(c == '!')
   break;
   if( c == '+'){
     cin >> n;
   d.push_front(n);
   }
   else if(c == '-'){
     cin >> n;
   d.push_back(n);
   }else 
   if(c == '*'){
     if(d.size()>=2){
     sum = d.front() + d.back();
     q.push(sum);
     d.pop_back();
     d.pop_front();
     }else if(d.size() == 1){
        sum = d.front() + d.back();
     q.push(sum);
     d.pop_back();
     }  else q.push(-1000); 
  }
  }
while (!q.empty()){
  if(q.front() == -1000){
    cout << "error" <<endl;
    q.pop();
  }
  else {
    cout << q.front() << endl;
    q.pop();
  }
}
}