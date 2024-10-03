#include<iostream>
using namespace std;
int main(){
    cout<<" ener a numer";
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        arr[i-1]=i*i;

    }
for(int j=0;j<n;j++){
    cout<<arr[j]<<" ";
}



    

}