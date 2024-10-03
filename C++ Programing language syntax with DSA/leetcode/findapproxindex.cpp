#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 3, 5, 7};
    int key, n = sizeof(arr) / 4;
    cout << "Enter a number to find from array : " << "\n";
    cin >> key;

    int start = 0;
    int end = n - 1;
    bool got = 0;
    int mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (key == arr[mid])
        {
            cout << "Got it. It's at index " << mid;
            got = true;
            break;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {

            end = mid - 1;
        }
    }
    cout << start << endl;
    if (got != true)
    {

        cout << "index should be " << start;
    }
}