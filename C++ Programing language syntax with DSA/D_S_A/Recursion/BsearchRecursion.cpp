#include <iostream>
using namespace std;
bool fun(int k, int arr[], int n)
{
    if (n == 0)
        return false;
    if (arr[0] == k)
        return true;
    else
    {
        fun(k, arr + 1, n - 1);
    }
}
int main()
{
    int arr[] = {1, 3, 5, 10, 7, 8, 9};
    int n = sizeof(arr) / 4;
    int k = 9;
    cout << fun(k, arr, n);

    return 0;
}