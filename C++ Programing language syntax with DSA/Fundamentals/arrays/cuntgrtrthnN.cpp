#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    int arr[]={23,4,45,76,9,100};
    int count=0;
    for(int i=0;i<=sizeof(arr)/4;i++){
        if(n<arr[i]){
            count++;
        }

    }
    cout<<count;
}