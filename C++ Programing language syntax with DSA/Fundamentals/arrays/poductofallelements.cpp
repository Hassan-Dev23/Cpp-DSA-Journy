#include<iostream>
using namespace std;
int main (){
 int arr[]={2,2,4,5};
 int product =1;
 int n=sizeof(arr)/4;
 for(int i=0;i<n;i++){
    product *=arr[i];
 }
 cout<<product;
}

