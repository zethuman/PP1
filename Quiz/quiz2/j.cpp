#include<iostream>
using namespace std;



int main()
{
    int num=0, t=0, d=1,temp = 0; 
    cin >> num;
    while (num)
    {
        t += (num % 2)*d;
        num = num / 2;
        d = d * 10; 
    }

    

    
    
     
    cout << t;
}