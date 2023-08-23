#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,q,x,y;
    int temp;
    cin>>n>>q;
    //int** arr=new int*[n];
    vector<vector<int>> vec;
    for(int i=0;i<n;i++)
    {
       while(cin>>temp)
        {
            
            vec[i].push_back(temp);
        } 
    }
    
    for(int i=0;i<q;i++)
    {
        cin>>x>>y;
        cout<<vec[x][y]<<endl;
    }
    
    return 0;

}
