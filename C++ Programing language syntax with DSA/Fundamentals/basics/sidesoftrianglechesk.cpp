#include<iostream>
using namespace std;        
int main (){
    int A,B,C;
    cout<< "enter three values in sequence : "<<endl;
    cin>>A;
    cin>>B;
    cin>>C;
    if((A+B)>C && (B+C)>A && (C+A)>B)
        cout<<"these three values are the sides of triangle";

    else
        cout<<"these three values are not the sides of triangle";

}