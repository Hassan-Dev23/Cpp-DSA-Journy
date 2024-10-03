#include<iostream>
using namespace std;
    int main(){
    int num;
    int r=0;
    cout<< "enter Number";
    cin>>num;
    cout<<endl;
    while(num!=0){
    r*=10;
    r+=(num%10);
    num/=10;
    }
cout<<r;
}
