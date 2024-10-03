#include <iostream>
using namespace std;

int diognalsum(int row, int col, int arr[][])
{
    arr=arr[row][
    int firstdsum = 0;
    int secondDsum = 0;
    for (int i = 0; i < row; i++)
    {
        firstdsum += arr[i][i];
        secondDsum += arr[i][col - i];
    }
    return firstdsum + secondDsum;
}
int main()
{
    int arr1[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int arr2[4][4] = {0, 1, 3, 4, 6, 7, 10, 11, 41, 18, 9, 11, 5, 2, 4, 4};
    cout << diognalsum(4, 4, arr1);
    return 0;
}