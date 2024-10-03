#include<iostream> 
using namespace std;
int main(){
int arr[]={1,2,3,4,5,6,7,8,9};
int size=sizeof(arr)/4;
int Rarr[size];

for(int i=0;i<size;i++){
// sizel--;
int j=size-1-i; 
Rarr[i]=arr[j];


}
for(int i=0;i<size;i++){
    cout<<Rarr[i]<<" ";
}

}