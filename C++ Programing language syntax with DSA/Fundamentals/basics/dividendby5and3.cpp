#include<iostream>
using namespace std;        //both methods
int main (){
    int x;
    cout<<"enter the number to check : ";
    cin>>x;
    
//     if (x%5==0 && x%3==0)
//          cout<<"yes this number is dividend by 5 and 3";

//     else 
//         cout<<"no this number is not dividend by 5 and 3";
// }
 if(x%15==0)
     cout<<"yes this number is dividend by 5 and 3";

    else 
        cout<<"no this number is not dividend by 5 and 3";
}
