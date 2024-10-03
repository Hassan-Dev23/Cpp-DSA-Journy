#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x ,y,count=0;
    cin>>x>>y;
    cout<<endl;
    count+= min(x-1,y-1);
    count+= min(x-1,8-y);
    count+= min(8-x,y-1);
    count+= min(8-x,8-y);
    cout<<count;

    return 0;
}
