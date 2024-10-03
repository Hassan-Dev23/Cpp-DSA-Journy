#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,3,2,1};
    int n= sizeof(arr)/4;
    int i=0;
    int j=n-1;
    bool bg=true;
    while(i<j){
        if(arr[i]!=arr[j]){
            bg=false;
            cout<<"no palendrom"<<endl;
            break;
            }
        
        i++;
        j--;

        }
        if (bg==true) cout<<"yes palendrom"<<endl;
       
}