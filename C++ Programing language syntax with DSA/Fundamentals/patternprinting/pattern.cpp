#include<iostream>
using namespace std;
int main(){
    int n ,s=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        cout<<(char)(s+64);
        }
        s++;
        cout<<endl;
    }

}