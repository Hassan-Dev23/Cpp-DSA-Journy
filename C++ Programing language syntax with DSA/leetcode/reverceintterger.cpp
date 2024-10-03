#include <iostream>
#include <climits>
using namespace std;

int main() {
     int x;
        int ans=0;
        while(x!=0){
            if(ans<(INT_MIN/10)||ans>(INT_MAX/10)){
                return 0;
            }
            ans=(x&1)*10+ans;
            
            x>>=1;
        }
        cout<<ans;
}
