#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 10, 9};

    for (int i = 0; i < 9; i++)
    {

        for (int j = i + 1; j < 10; j++)
        {

            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}