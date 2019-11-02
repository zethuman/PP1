#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int *a; 
    int n; 
    int sum; 
    cin >> n >> sum;

    a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int lt = 0; 
    int rt = n - 1; 
    while (lt != rt)
    {       
        int cursum = a[lt] + a[rt];
        if (cursum < sum)
            lt++;
        else if (cursum > sum)
            rt--;
        else // if (cursum == sum)
        {
            cout << "Yes" ;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}