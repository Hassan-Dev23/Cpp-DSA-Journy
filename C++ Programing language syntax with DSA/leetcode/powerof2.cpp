#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n>0){
        while(n!=1){
            if(n%2==1){
                return false;
                break;
            }
            n/=2;
        }
        return true;
    }
    return false;
}
