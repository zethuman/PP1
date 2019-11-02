 #include<iostream> 
 #include<bits/stdc++.h> 

using namespace std; 

int main()
{ 
    long long int a,b; 
    cin>>a>>b; 

    if(b%a!=0) 

    cout<<b/a+1<<" "<<b-((b/a)*a); 

    else cout<<b/a<<" "<<a; 


    return 0; 
    
}