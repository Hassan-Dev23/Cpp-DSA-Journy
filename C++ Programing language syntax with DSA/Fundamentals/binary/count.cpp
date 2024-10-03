#include<iostream>
using namespace std;
int main(){
    int  n=10011223;
    int count=0;
    while (n!=0)
    {
        if(n&3){
            count++;
            
            
        }
        n/=10;
        
    }
    cout<<count;
    return 0;
}