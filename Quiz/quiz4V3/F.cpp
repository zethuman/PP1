#include <iostream>
#include <map>
#include<algorithm>

using namespace std;

int main()
{
int n;
cin >> n;
int a[n];
int b[n];

for(int i = 0; i < n; i++){
    cin >> a[i];
    b[i] = 0;
}
  
for(int i = 0; i < n; i++){
    if(a[i] % 2 == 0){
        b[i]++;
    }
        
    if(a[i] % 3 == 0){
        b[i]++;
    }
        
    if(a[i] % 4 == 0){
        b[i]++;
    }


}

reverse(b, b+ n);

for(int i = 0; i < n; i++){
  cout << b[i] << " ";
}
    
}