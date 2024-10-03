#include<iostream>
using namespace std;        
int main (){
    int own,ali,saad;
    cout<< "enter the ages of own , ali and saad in sequence : "<<endl;
    cin>>own;
    cin>>ali;
    cin>>saad;
    if(own<ali){
        if(own<saad)
            cout<<"own is youngest";
        else 
            cout<<"saad is youngest";
    }
    else if (ali<saad)
        cout<<"ali is youngest";
        else 
            cout<<"saad is youngest";


}