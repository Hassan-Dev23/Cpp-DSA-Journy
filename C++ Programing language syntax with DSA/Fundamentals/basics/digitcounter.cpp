#include<iostream>
using namespace std;
int main(){
    int n,c=0;
    cout<<"enter n : ";
    cin>>n;
    while(n!=0){
    n=n/10;
    c++;
    }
    cout<<c;
}