#include<iostream>
#include <climits>
using namespace std;
int main()
{
    
    int arr[]={1,2,3,4,5,1,7,89,90,10};
    int mx=INT_MIN; int smax=INT_MIN;
    int n =sizeof(arr)/4;
    for(int i=0;i<n;i++){
        
        mx=max(mx,arr[i]);
     
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=mx)
        smax=max(smax,arr[i]);
     
    }

cout<<smax<<" ";
cout<<mx;

}