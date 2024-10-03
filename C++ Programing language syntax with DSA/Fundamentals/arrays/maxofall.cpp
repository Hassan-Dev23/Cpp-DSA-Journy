#include<iostream>
#include <climits>
using namespace std;
int main()
{
    
    int arr[]={1,2,3,4,5,1,7,8,9,10};
    int mx=INT_MAX;
    int n =sizeof(arr)/4;
    for(int i=0;i<n;i++){
        mx=min(mx,arr[i]);
        // if(arr[i]>mx){
        //     mx=arr[i];
        // }
        
    }

cout<<mx;
}