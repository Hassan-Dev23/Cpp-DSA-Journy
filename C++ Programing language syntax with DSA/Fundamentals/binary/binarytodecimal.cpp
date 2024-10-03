#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n,i=0,ans=0;
    cout<<"Enter binary numbr  : ";
    cin>>n;
    while(n!=0){
        ans+=((n%10)*pow(2,i));
        i++;
        n/=10;
    }
 cout<<ans;



    return 0;
}