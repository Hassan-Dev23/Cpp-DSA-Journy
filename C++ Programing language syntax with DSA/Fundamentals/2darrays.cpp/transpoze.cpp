#include <iostream>
using namespace std;
int main(){
    
    int arr[2][3];
    cout<<"Enter array values  ";
    
    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            cin>>arr[i][j];
        
    }
    cout<<endl;

    }
    for (int j=0;j<2;j++){
        for (int i=0;i<3;i++){
            cout<<arr[i][j]<<" ";
        
    }
    cout<<endl; 

}
}