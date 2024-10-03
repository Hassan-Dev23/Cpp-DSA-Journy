#include<iostream>
using namespace std;
int main(){
    char x;
    cout<<"Enter a character :"<<endl;
    cin>>x;
    if(x =='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U'){
       cout << x << " is a vowel." << endl;
    } 
    else {
        cout << x << " is not a vowel." << endl;
    }
}
