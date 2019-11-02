#include <bits/stdc++.h>


using namespace std;


queue<pair<int, int> > q;

int main() {

 int n;

 cin>>n;

 q.push(make_pair(n, 0));


 while(!q.empty() && q.front().first != 1)

 {

  int k = q.front().first;

  int cnt = q.front().second;

  q.pop();


  if(k%3 == 0)

  {

   q.push(make_pair(k/3, cnt + 1));

  }


  if(k%2 == 0)

  {

   q.push(make_pair(k/2, cnt + 1));

  }


  q.push(make_pair(k - 1, cnt + 1));

 }


 cout << q.front().second;

}