#include<iostream>
using namespace std;
int facto(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f *=i;
    }
    return f;
}
int main(){
    int n,r;
    cout<<"N must be greater then R\n";
    cout<<"enter N : ";
    cin>>n;
    cout<<"enter R : ";
    cin>>r;
    int a = facto(n);
    int b = facto(n-r);
    cout<<"permutation of N and R is : "<<a/b;
}