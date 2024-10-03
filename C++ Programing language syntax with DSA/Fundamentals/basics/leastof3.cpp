#include<iostream>
using namespace std;        
int main (){
    int A,B,C;
    cout<< "enter three values in sequence : "<<endl;
    cin>>A;
    cin>>B;
    cin>>C;
    if(A<B && A<C)
         cout<<A<<" is least Number";
    else if(B<A && B<C)
         cout<<B<<" is least Number";
    else
        cout<<C<<" is least Number";

}