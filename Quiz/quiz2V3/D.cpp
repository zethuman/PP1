#include <iostream>
#include<sstream>
#include <math.h>
 
using namespace std;
 
int main()
{
   int day1, month1, year1;
   int day2, month2, year2;

   cin >> day1 >> month1 >> year1;
   cin >> day2 >> month2 >> year2;

   if (day1 >= day2 && month1 >= month2 && year1 < year2 ||  day1 <= day2 && month1 <= month2 && year1 < year2 || day1 >= day2 && month1 <= month2 && year1 < year2 || day1 <= day2 && month1 >= month2 && year1 < year2 || day1 == day2 && month1 < month2 && year1 == year2 || day1 < day2 && month1 == month2 && year1 == year2  )
   {
       cout << "Yes";
   }
   else cout << "No";
}