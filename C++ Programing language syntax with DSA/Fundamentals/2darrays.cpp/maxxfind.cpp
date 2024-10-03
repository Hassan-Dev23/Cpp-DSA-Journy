#include <iostream>
#include<climits>
using namespace std;
int main(){
    int mx=INT_MAX;
    int arr[3][3]={{1,2,3},{4,15,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            mx=min(mx,arr[i][j]);
        }
    }
    cout<<mx;
    




}