#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {110, 99, 98, 7, 6, 5, 4, 3, 2, 1};
    int key, n = 10;
    cout << "Enter a number to find from array : " << "\n";
    cin >> key;

    int start = 0;
    int end = n - 1;
    bool got = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (key == arr[mid])
        {
            cout << "Got it. It's at index " << mid;
            got = true;
            break;
        }
        else if (key > arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    if (got != true)
    {
        cout << "Key is not in array";
    }
}