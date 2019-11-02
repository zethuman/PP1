#include <iostream>

using namespace std;

int main(){
    string m[13];
    m[0] = "JANUARY";
    m[1] = "FEBRUARY";
    m[2] = "MARCH"; 
    m[3] = "APRIL";
    m[4] = "MAY";
    m[5] = "JUNE";
    m[6] = "JULY";
    m[7] = "AUGUST";
    m[8] = "SEPTEMBER";
    m[9] = "OCTOBER";
    m[10] = "NOVEMBER";
    m[11] = "DECEMBER";
    string x;
    int y,pos;
    cin >> x >> y;
    for(int i = 0; i < 12; ++i){
        if(m[i] == x){
            pos = i;
        }
    }
    cout << m[(pos + y )%12];
    
}