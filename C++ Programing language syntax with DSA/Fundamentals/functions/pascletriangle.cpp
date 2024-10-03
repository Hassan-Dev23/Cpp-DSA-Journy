#include <iostream>
using namespace std;
int facto(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f *= i;
    }
    return f;
}
int combination(int n, int r)
{

    int a = facto(n);
    int b = facto(r);
    int c = facto(n - r);
    return a / (b * c);
}
int main()
{

    int n, m;
    cout << "enter N : ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << combination(i, j) << " ";
        }
        cout << endl;
    }
}
