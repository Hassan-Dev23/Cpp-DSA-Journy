#include<iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n-i;j++){
        cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++)
        cout<<"*";
        cout<<endl;
        

    }
    for(int l=1;l<=n-1;l++){
        for(int m=1;m<=l;m++)
        cout<<" ";
        for(int o=1;o<=(2*l-1)-(n-1);o++)
        cout<<"*";
        cout<<endl;
    }

}