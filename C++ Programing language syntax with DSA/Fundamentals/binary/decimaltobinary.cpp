#include <iostream>
#include<math.h>
using namespace std;
int main(){
//code to convert decimal number to binary number 
    int n;
    int b=0;
    int M=1;
    
    cout<<"Enter decimal number : ";
    cin>>n;
    cout<<endl;
    while(n!=0){
        b=((n&1)*M)+b;
        n>>=1; 
        M*=10;    
        }
    cout<<b;

} 