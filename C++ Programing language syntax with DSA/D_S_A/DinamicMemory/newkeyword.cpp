#include <iostream>
using namespace std;
void fun(int *arr, int n)
{
    cout << arr[1];
}
int notmain()
{
    int n = 10;
    int *ptr = new int;
    *ptr = 32;
    cout << *ptr;
    delete ptr;

    return 0;
}
int main()
{
    // int row;
    // cin >> row;
    // int col;
    // cin >> col;
    // int **arr = new int *[4];
    // arr[0] = new int[2];

    // int **d2arr = new int *[row];
    // for (int i = 0; i < row; i++)
    // {
    //     d2arr[i] = new int[col];
    // }
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cin >> d2arr[i][j];
    //     }
    // }
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout << d2arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < row; i++)
    // {
    //     delete[] d2arr;
    // }
    // delete[] d2arr;
    // int *arr = new int[3]{1, 2, 3};
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << arr[i] << ' ';
    // }
    // delete[] arr;
    int **arr = new int *[4];
    for (int i = 0; i < 4; i++)
    {
        arr[i] = new int[i];
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
}
