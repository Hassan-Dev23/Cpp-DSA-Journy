#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 98, 99, 110};
    int n = 10;
    bool swapped = true;
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] > arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
                swapped = false;
            }
            if (swapped)
            {
                break;
            }
        }
    }
    // Print sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << swapped;

    return 0;
}
