#include<iostream>
using namespace std;
int main(){
    char i;
    cout<<"uppercase A or lowercase a : ";
    cin>>i;
    if (i=='A'){
  while(i<='Z'){
  cout<<i<<" "<<(int)i<<endl;
  i++;}
  }
  else if(i=='a'){
    while(i<='z'){
  cout<<i<<" "<<(int)i<<endl;
  i++;}
  }
else
cout<<"invalid input";
};
