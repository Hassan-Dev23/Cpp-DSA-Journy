#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int> &arr, int start, int end)
{
    int pivot = arr[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    int pivotindex = start + count;
    swap(arr[start], arr[pivotindex]);
    int i = start;
    int j = end;
    while (i < pivotindex && j > pivotindex)
    {
        while (arr[i] <= pivot)
            i++;

        while (arr[j] > pivot)
            j--;

        if (i < pivotindex && j > pivotindex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotindex;
}
void quicksort(vector<int> &arr, int start, int end)
{
    if (start >= end)
        return;
    int p = partition(arr, start, end);
    // right part

    quicksort(arr, start, p - 1);

    // left part
    quicksort(arr, p + 1, end);
}
int main()
{
    vector<int> arr = {1, 2, 3, 98, 7, 6, 7, 4, 345, 23, 1, 276, 88};
    int start = 0;
    int end = arr.size() - 1;
    quicksort(arr, start, end);

    for (int i = 0; i <= end; i++)
        cout << arr[i] << ' ';

    return 0;
}