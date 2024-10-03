#include <iostream>
using namespace std;

int main()
{
    int stalls[5] = {10, 1, 2, 7, 5};
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (stalls[i] > stalls[j])
            {
                swap(stalls[i], stalls[j]);
            }
        }
    }
    for (int j = 0; j < n; j++)
    {
        cout << stalls[j] << ", ";
    }
}