#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter first n : ";
    cin>>n;
    bool flag= true;
    for(int i=2;i<=n/2;i++){
        if(n%i==0) 
            flag=false;
            break;
    }
    if(n==1)
        cout<<"neither comp nor prime";
    else if(flag == true)
        cout<<"prime num";
    else 
        cout<<"composite num";

    
}