#include<iostream>
using namespace std;

int main(){
    int n,m;
    
    n =6;
    m =6;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
             if((i==2 ||i==3)&&(j==2||j==3||j==4||j==5))
             cout<<"* ";
             else
             cout<<"  ";
        }
        cout<<endl;
        

    }

}