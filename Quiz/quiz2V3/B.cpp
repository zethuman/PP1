#include <iostream>
#include<sstream>
#include <math.h>
 
using namespace std;
 
int main()
{
    int pages ;
    int days ;
    double ostatok;
    int perday;
    cin >> pages >> days;
    
    ostatok = pages % days;
    perday = pages / days;
    
    if (ostatok != 0)
    {
        cout << perday + 1 << " ";
    }
    else cout << perday << " ";
}