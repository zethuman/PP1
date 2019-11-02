#include<iostream>
#include<map>
#include<algorithm>

using namespace std;


bool cmp(pair<int, int >a , pair <int, int> b){
    if(a.first < b.first)return true;
    else if(a.first == b.first && a.second <= b.second)return true;
    return false;
}
int main(){
    int n;
    cin >> n;
    
    pair <int, int> a[n];
    for(int i =0 ; i < n; i++){
        cin >> a[i].first >>a[i].second;
    }
    
    sort(a, a+n, cmp);
    
    for(int i =0 ; i < n; i++){
        cout<< a[i].first <<' '<<a[i].second<<endl;
    }
}