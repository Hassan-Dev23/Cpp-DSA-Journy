#include<iostream>
using namespace std;
int main(){
    int sarr[5][5];
    int arr1[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            arr1[i][j]=10;
        }
    }
    int arr2[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            arr2[i][j]=10;
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            sarr[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<sarr[i][j]<<" ";

           }
           cout<<endl;
    }
}