#include <iostream>
#include<sstream>
using namespace std;

int main(){
   
   	   stringstream ss;
       string t,line;
	   string best = "";

       getline(cin,line);
       ss << line;
       
       while(ss >> t)
       {
           if (best.size() < t.size())
           {
               best = t;
           }
       }

       cout << best<<endl;
       cout << best.size() << endl;



		return 0;
	}
  
 