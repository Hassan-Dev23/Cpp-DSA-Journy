#include<iostream>
using namespace std;
// int main(){
//     int n ,s=1;
    
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         char ch='A';
//         for(int j=1;j<=n;j++){
//             cout<<ch;
//             ch++;
//         }
//         cout<<endl;
//     }

// }
int main(){
    int n ,s=1;
    
    cin>>n;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n;j++){
            cout<<(char)(j+96);
           
        }
        cout<<endl;
    }

}