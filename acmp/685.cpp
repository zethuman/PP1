#include <iostream> 

using namespace std;

int main() 
{ 
  int r,s,t,u,v,w,dro1,dzu1,dze1,dro2,dzu2,dze2; 
  cin>>r>>s>>t>>u>>v>>w; 
  if(r>=s&&r>=t)dro1=r; 
  if(s>=r&&s>=t)dro1=s; 
  if(t>=s&&t>=r)dro1=t; 
  if(r>=s&&r<=t)dzu1=r; 
  if(r>=t&&r<=s)dzu1=r; 
  if(s>=r&&s<=t)dzu1=s; 
  if(s>=t&&s<=r)dzu1=s; 
  if(t>=s&&t<=r)dzu1=t; 
  if(t>=r&&t<=s)dzu1=t; 
  if(r<=s&&r<=t)dze1=r; 
  if(s<=r&&s<=t)dze1=s; 
  if(t<=s&&t<=r)dze1=t; 
  if(u>=v&&u>=w)dro2=u; 
  if(v>=u&&v>=w)dro2=v; 
  if(w>=v&&w>=u)dro2=w; 
  if(u>=v&&u<=w)dzu2=u; 
  if(u>=w&&u<=v)dzu2=u; 
  if(v>=u&&v<=w)dzu2=v; 
  if(v>=w&&v<=u)dzu2=v; 
  if(w>=v&&w<=u)dzu2=w; 
  if(w>=u&&w<=v)dzu2=w; 
  if(u<=v&&u<=w)dze2=u; 
  if(v<=u&&v<=w)dze2=v; 
  if(w<=v&&w<=u)dze2=w; 
  cout<<dro1*dro2+dzu1*dzu2+dze1*dze2; 
  } 