#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/4;
    int j=n-1;
    for(int i=0;i<n;i++){
        if(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
        }
  
    }
    cout<<endl;
for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}