#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 5, 9, 7, 8};
    for (int i = 0; i <= 5; i++)
    {
        if (i % 2 == 0)
            arr[i] += 10;
        else
        {
            arr[i] *= arr[i];
        }
    }
    for (int i = 0; i <= 5; i++)
    {
        cout << arr[i] << " ";
    }
}