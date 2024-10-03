#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {9, 2, 6, 8, 4, 10, 3, 1, 5, 7};
    int n = 10;
    bool swpd = 0;
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swpd = 1;
            }
        }
        if (swpd == 0)
            break;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << swpd;
}