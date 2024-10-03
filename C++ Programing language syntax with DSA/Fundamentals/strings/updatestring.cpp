#include<iostream> 
#include<string>
using namespace std;
int main (){
   cout<<"enter a string ";
   string str;
   getline(cin,str);
   int t=0;
   for(int i=0;i<str.length();i++){
    if(i%2==0){
    str[i]='a';}
    
    
    }
    cout<<endl<<str;
}