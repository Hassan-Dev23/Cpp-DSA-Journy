#include<iostream>
using namespace std;
int main(){
    int arr[4][2]={{1,28},{2,20},{3,22},{4,30}};
    for(int i=0;i<4;i++){
        for(int j=0;j<1;j++){
            cout<<"Marks of roll No : "<<arr[i][j]<<" are : "<<arr[i][j+1]<<endl;
        }
    }
}