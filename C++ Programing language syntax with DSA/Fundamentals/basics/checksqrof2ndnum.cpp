#include<iostream>
using namespace std;
int main(){
    int a ,b;
    cout<<"Enter first and second number :";
    cin>>a;
    cin>>b;
    cout<<endl;
    if (b == a*a){
        cout<<"Second number "<<b<<" is square of first number "<<a;
        cout<<endl;
    }
    else{
        cout<<"Second number "<<b<<" is not the square of first number "<<a;
        cout<<endl;
    }
}