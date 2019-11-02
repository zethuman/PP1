#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    pair <int, int> a[n];
    for(int i =0 ; i < n; i++){
        cin >> a[i].first >>a[i].second;
    }
    int cnt = 0;
    for(int i =0 ; i < n; i++){
    if(a[i].first == a[i].second)
    {
      cnt++;
    }
    }
    
   cout << cnt ;
}

// #include <iostream>
// #include <vector>
// #include<algorithm>
// #include<cmath>
// using namespace std;

// int main()
// {
//     vector<int>a;
//     int maxi=0;
//     int n;
//     cin>>n;
//     for (int i=0;i<n;i++){
//         int x,y;
//         cin>>x>>y;
//         a.push_back(abs(x-y));
//     }
//     int cnt=0;
//     sort(a.begin(),a.end());
//         for (int i=0;i<a.size();i++){
//             if (a[i]==a[i+1]) cnt++;
//             else {
//                 if (++cnt>maxi) maxi=cnt;
//                 cnt=0;
//             }
//         }
//         cout<<maxi;
// }