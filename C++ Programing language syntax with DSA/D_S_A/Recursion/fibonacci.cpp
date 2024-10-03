#include <iostream>
using namespace std;
int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int ans = fib(n - 1) + fib(n - 2);

    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << fib(n);
    cout << endl;
    int v1 = 0;
    int v2 = 1;
    int ans = 0;

    for (int i = 1; i < n; i++)
    {
        ans = v1 + v2;
        v1 = v2;
        v2 = ans;
    }
    cout << ans << " ";
}