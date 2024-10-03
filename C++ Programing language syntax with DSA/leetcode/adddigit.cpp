#include <iostream>
#include <math.h>
#include<climits>
using namespace std;
int addigit(int num)
{
    int ans=0;
    while(num)
    {
        ans+=num%10;
        num/=10;
    }
    return ans;
}
int main(){
    int num;
    cin>>num;
    int ad=0;
    while(num>9){
        ad=addigit(num);
        num=ad;
    }
 cout<<ad<<endl;
 cout<<num;
    
}