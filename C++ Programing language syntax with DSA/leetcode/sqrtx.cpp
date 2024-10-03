#include <iostream>
#include <climits>
using namespace std;
int main() {
        int x, ans=0;

        cin>>x; 
        double i=0;
        while(i*i<x)
        {
            i++;
           if(i*i<x||i*i==x)
           {
            ans=i;
            continue;
           }
          
        }
        cout<<ans;
}