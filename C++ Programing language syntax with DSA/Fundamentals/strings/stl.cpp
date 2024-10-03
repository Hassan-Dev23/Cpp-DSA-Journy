#include<iostream> 
#include<string>
using namespace std;
int main (){
   string s = "hasan is a good boya";
    s.push_back('a');
    cout<<s<<endl;
    s.pop_back();
    s.pop_back();
cout<<s<<endl;

s.append(" ha");
cout<<s<<endl;
s.clear();
cout<<s<<endl;
s="hassan";
s=" ali"+s;
cout<<s<<endl;

}