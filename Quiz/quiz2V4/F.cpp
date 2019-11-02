#include <iostream>
#include <cmath>
using namespace std;

int power(int a, int b) {
    
    return pow(a,b);
}

 
int main()
{
    int a,b;
    cin >> a >> b;

    cout << power(a,b);
     
}