 #include <iostream>
 
 using namespace std ;

 int n, x;
 int a = 0;
 int b = 0 ;
 
 int main ()
 {
    cin>>n;

    for ( int i = 0; i < n ; i++ )
 {
    cin >> x;

    if ( x%2==0 ) a++;
    else b++;
 }
    cout << a << " " << b << endl;
 }
 
 
