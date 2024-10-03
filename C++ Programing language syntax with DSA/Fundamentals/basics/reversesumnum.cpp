#include<iostream>
using namespace std;
int main(){
    int n,r=0,ld ,rn;
    cout<<"enter N : ";
    cin>>n;
    rn=n;
    while(n!=0){ 
        ld=n%10;
        r*=10;
        r+=ld;
        n=n/10;
    }
cout<<r+rn;
}
