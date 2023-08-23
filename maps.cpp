#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
//#include <utility>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
       map<string,int> m; 
       int n,type,marks;
       string name;
       cin>>n;
       while(n!=0)
       {
           cin>>type;
    
           if(type==1)
           {
               cin>>name>>marks;
               if(m.find(name)!=m.end())
               {
                    marks+=m[name];
                    m[name]=marks;   
               }
               else
                    m.insert(make_pair(name,marks));
            
           }
           
           
           else if(type==2)
           {   
               cin>>name; 
              
               m.erase(name);
           } 
           else if(type==3)
           {
               cin>>name;
               
              if(m.find(name)!=m.end())
               {
                    cout<<m[name]<<endl;   
               }
              else  
                cout<<"0\n";
               
           }
           
               
           n--;
       }
    return 0;
}



