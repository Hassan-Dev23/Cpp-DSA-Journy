#include<iostream>
using namespace std;
int main(){
    int n ,f;
    cout<<"enter first n : ";
    cin>>n;
    for(int i=n/2;i>1;i--){
    if(n%i==0) 
    cout<<i<<" ";
    break;
    }
    
}