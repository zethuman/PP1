#include <iostream>
#include<sstream>
#include <math.h>
#include<vector>

using namespace std;
 
int main()
{
 int n;
 cin >> n;

 if ( n >= 95 && n <= 100)
 {
     cout << "A";
 }
 
 if ( n >= 90 && n <= 94)
 {
     cout << "A-";
 }
 if ( n >= 85 && n <= 89)
 {
     cout << "B+";
 }
 if ( n >= 80 && n <= 84)
 {
     cout << "B";
 }
 if ( n >= 75 && n <= 79)
 {
     cout << "B-";
 }
 if ( n >= 70 && n <= 74)
 {
     cout << "C+";
 }
 if ( n >= 65 && n <= 69)
 {
     cout << "C";
 }
 if ( n >= 60 && n <= 64)
 {
     cout << "C-";
 }if ( n >= 55 && n <= 59)
 {
     cout << "D+";
 }if ( n >= 50 && n <= 54)
 {
     cout << "D";
 }
 if ( n >= 0 && n <= 49)
 {
     cout << "F";
 }
}