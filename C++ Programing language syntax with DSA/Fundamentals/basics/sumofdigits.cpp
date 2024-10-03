#include<iostream>
using namespace std;
int main(){
    int n,s=0 ;
    cout<<"enter N : ";
    cin>>n;
    while(n!=0){
        s+=n%10;
        n=n/10;

    }
cout<<s;
}
