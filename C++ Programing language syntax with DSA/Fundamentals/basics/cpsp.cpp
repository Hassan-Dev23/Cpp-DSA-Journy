#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"entre cp ";
    cin>>cp;
    int sp;
    cout<<"entre sp ";
    cin>>sp;
   
    if(cp<sp){
        cout<<"profit : "<<sp-cp;}
        
    else if(cp>sp){
        cout<<"loss : "<<sp-cp;}
        
    else{
        cout<<"no profit no loss";}
        
}

    