#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 1, 1, 1, 5, 5, 7, 8, 9, 10};
    int key, n = 10;
    cout << "Enter a target to find from array : " << "\n";
    cin >> key;
    int first, last, start = 0, end = n - 1, mid;
    bool gotit = 0;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (key == arr[mid])
        {
            first = mid;
            end = mid - 1;
            gotit = 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    start = 0, end = n - 1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (key == arr[mid])
        {
            last = mid;
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    if (gotit)
    {
        cout << "first indesx of target is  " << first << endl;
        cout << "The last index of target is  " << last << endl;
    }
    else
    {
        cout << "!! Target not found !!";
        return -1;
    }
}