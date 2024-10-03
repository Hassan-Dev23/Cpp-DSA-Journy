#include <iostream>
using namespace std;
int main(){
    int sum = 0;
    int arr[5][5]={{23,45,76,34,34},{45,76,34,80,70},{45,76,34,90,76},{45,76,34,98,67},{45,76,22,34,11}};
    for (int i =2;i<5;i++){
        for (int j=2;j<5;j++){
            cout<<arr[i][j]<<" ";
        sum+=arr[i][j];
        
    }
    cout<<endl;

    }
    cout<<sum;
}