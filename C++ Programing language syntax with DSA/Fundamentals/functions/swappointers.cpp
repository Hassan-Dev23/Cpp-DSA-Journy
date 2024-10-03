#include<iostream>
using namespace std;
int main(){
int a =2;
int b=5;
//now start swaping using pointers
int* A=&a;
int* B=&b;
int temp = *A;
*A=*B;
*B=temp;
// swaped using pointers
cout<<"a = "<<a<<"\t"<<"b = "<<b<<endl;
cout<<a<<"";

}