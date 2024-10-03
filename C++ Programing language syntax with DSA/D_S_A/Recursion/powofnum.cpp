#include <iostream>
using namespace std;
int pwr(int a, int b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    int ans = pwr(a, b / 2);
    if (b & 2)
    {
        return ans * ans;
    }
    else
    {
        return a * ans * ans;
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << pwr(a, b);
    return 0;
}