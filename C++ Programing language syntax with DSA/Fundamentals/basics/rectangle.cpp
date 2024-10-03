#include<iostream>
using namespace std;
int main(){

    int L;
    int A,P;
    cout<<"length :  ";
    cin>>L;
    int B;
    cout<<"Breath :  ";
    cin>>B;
   
    A=L*B;

    P=(2*(L+B));

    if(A>P){
        cout<<"Area is grater then its parameter";}
        
    else 
        cout<<"Area is not grater then its parameter";
}