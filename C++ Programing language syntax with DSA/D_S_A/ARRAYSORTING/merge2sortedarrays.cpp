#include <iostream>
#include <vector>
using namespace std;
void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0;
    int j = 0;
    int index = 0;
    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            arr3[index++] = arr1[i++];
        }
        else
        {
            arr3[index++] = arr2[j++];
        }
    }
    while (i < n)
    {
        arr3[index++] = arr1[i++];
    }
    while (j < m)
    {
        arr3[index++] = arr2[j++];
    }
}
void merger(int arr[], int start, int end)
{
    vector<int> temp(end - start);
    int mid = (start + (end - 1)) / 2;
    int i = start;
    int j = mid + 1;
    int index = 0;
    while (i < mid && j < end)
    {
        if (arr[i] <= arr[j])
        {
            temp[index++] = arr[i++];
        }
        else
        {
            temp[index++] = arr[j++];
        }
    }
    while (i < mid)
    {
        temp[index++] = arr[i++];
    }
    while (j < end)
    {
        temp[index++] = arr[j++];
    }
    for (int i = start; i < end; i++)
    {
        arr[i] = temp[i];
    }
}
int notmain()
{
    int arr[5] = {1, 3, 5, 7, 8};
    int arr2[6] = {0, 2, 4, 6, 8, 9};
    int arr3[11] = {0};
    int n = 5;
    int m = 6;
    merge(arr, n, arr2, m, arr3);
    for (int i = 0; i < n + m; i++)
        cout << arr3[i] << ' ';
    return 0;
}
int main()
{
    int arr[10] = {1, 3, 5, 7, 8, 2, 4, 6, 8, 8};
    int n = (sizeof(arr) / 4);
    merger(arr, 0, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
}