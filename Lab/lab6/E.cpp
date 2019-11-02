#include<iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int hypotenuse(int a, int b)
{
    long double c;
    c = sqrt( (pow(a, 2) ) + (pow(b, 2)) ); 
    cout << setprecision(4)  << c;
}

int main()
{
 int a, b;

 cin >> a >> b ;

hypotenuse(a , b);

 }