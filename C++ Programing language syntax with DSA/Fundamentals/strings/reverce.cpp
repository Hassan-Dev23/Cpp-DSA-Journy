#include<iostream> 
#include<string>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main (){
   string s = "abcde";
    reverse(s.begin(),s.begin()+3);
    cout<<s<<endl;
}