#include<iostream>
using namespace std;        
int main (){
    int x,y;
    cout<<"input x axis : ";
    cin>>x;
    cout<<"input y axis : ";
    cin>>y;
    if(x>0 && y>0)
        cout<<"1st Quadrent";
    else if(x<0 && y>0)
        cout<<"2nd Quadrent";
    else if(x<0 && y<0)
        cout<<"3rd Quadrent";
    else if(x>0 && y<0)
        cout<<"fourth Quadrent";
    else if(x==0 && y==0)
        cout<<"orign point";
    else 
        cout<<"invalid entry";
}



 