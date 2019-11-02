#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
int x1, y1, x2, y2;
double dis;
cin >> x1 >> y1 >> x2 >> y2;

dis = sqrt(pow((x2-x1),2)+pow((y2-y1),2));

cout << dis;

}