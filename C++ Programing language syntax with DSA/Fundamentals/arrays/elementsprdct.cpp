#include<iostream>
using namespace std;
int main()
{
    int pdt=1;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n =sizeof(arr)/4;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\n";
        pdt*=arr[i];
    }

cout<<pdt;
}