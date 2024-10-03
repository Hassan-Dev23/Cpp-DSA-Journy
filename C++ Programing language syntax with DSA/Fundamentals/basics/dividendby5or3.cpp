#include<iostream>
using namespace std;        
int main (){
    int x;
    cout<<"enter the number to check : ";
    cin>>x;
    
    if (x%5==0 || x%3==0)
         cout<<"yes this number is dividend by 5 or 3";

    else 
        cout<<"no this number is not dividend by 5 or 3";
}
