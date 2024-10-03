#include <iostream>
using namespace std;
void inttonum(int n, string arr[])
{
    if (n == 0)
        return;
    int d = n % 10;

    n /= 10;
    inttonum(n, arr);
    cout << arr[d] << " ";
}
int main()
{
    int n;
    cin >> n;
    string str[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    inttonum(n, str);

    return 0;
}