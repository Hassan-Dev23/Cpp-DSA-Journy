#include <iostream>
using namespace std;
char cap(char a){
    a-=32;
    return a;
}
int main() {
    char i;
    cout<<"enter a small alphabet : ";
    cin>>i;
    cout<<endl<<cap(i);
    return 0;
}