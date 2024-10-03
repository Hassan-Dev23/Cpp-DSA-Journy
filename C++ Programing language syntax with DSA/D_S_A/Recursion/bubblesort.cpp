#include <iostream>
using namespace std;
void sort(int *arr, int n)
{
    if (n == 0)
        return;
    if (n == 1)
        return;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    sort(arr, n - 1);
}
int main()
{
    int arr[] = {2, 3, 34, 78, 9, 24, 87};
    int n = (sizeof(arr) / 4) - 1;
    sort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    return 0;
}