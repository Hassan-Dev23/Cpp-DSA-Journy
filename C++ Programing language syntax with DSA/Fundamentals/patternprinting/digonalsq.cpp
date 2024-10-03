#include<iostream>
using namespace std;

int main(){
    int n,m;
    
    n =6;
    m =6;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==j||i+j==n+1)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
        

    }

}