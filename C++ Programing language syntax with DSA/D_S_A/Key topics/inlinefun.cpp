#include <iostream>
using namespace std;

inline int lastnum(int a = 99, int b = 10)
{

    return (a != b) ? a % b : 0;
}
int main()
{
    int a = 234;
    int b = 10;
    int ans = lastnum();
    cout << ans;
}