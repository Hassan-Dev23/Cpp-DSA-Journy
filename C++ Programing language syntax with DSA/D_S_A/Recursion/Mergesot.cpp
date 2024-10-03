#include <iostream>
#include <vector>
using namespace std;
void merger(vector<int> &arr, int start, int end)
{

    int mid = (start + end) / 2;
    int len1 = mid - start + 1;
    int len2 = end - mid;
    int *temp1 = new int[len1];
    int *temp2 = new int[len2];
    int k = start;
    for (int i = 0; i < len1; i++)
    {
        temp1[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        temp2[i] = arr[k++];
    }
    int i = 0;
    int j = 0;
    k = start;
    while (i < len1 && j < len2)
    {
        if (temp1[i] > temp2[j])
        {
            arr[k++] = temp2[j++];
        }
        else
        {
            arr[k++] = temp1[i++];
        }
    }
    while (i < len1)
        arr[k++] = temp1[i++];

    while (j < len2)
        arr[k++] = temp2[j++];
}
void mergesort(vector<int> &arr, int start, int end)
{
    if (start == end)
        return;
    int mid = (start + end) / 2;
    // right
    mergesort(arr, start, mid);
    mergesort(arr, mid + 1, end);
    merger(arr, start, end);
}
void print(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << ' ';
}
int main()
{
    vector<int> arr = {1, 2, 4, 5, 6, 78, 9, 0, 66, 4, 3, 2, 6, 2, 2, 3, 7, 8, 8, 8, 8888, 88, 8, 8, 8, 8, 8, 9, 9, 9, 8, 7, 7, 7, 99, 0, 88, 88, 8};
    int n = arr.size() - 1;
    int start = 0;
    int end = n;
    mergesort(arr, start, end);
    print(arr);
    return 0;
}