#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{

    vector<int> height = {4, 2, 0, 3, 2, 5};

    int n = height.size();
    int water = 0;
    int rightmax = 0;
    int leftmax = 0;
    int maxheight = INT_MIN, index;
    for (int i = 0; i < n; i++)
    {

        if (maxheight < height[i])
        {
            maxheight = height[i];
            index = i;
        }
    }
    for (int i = 1; i < index; i++)
    {
        if (leftmax > height[i])
        {
            water += (leftmax - height[i]);
        }
        else
        {
            leftmax = height[i];
        }
    }
    for (int i = n - 2; i > index; i--)
    {
        if (rightmax > height[i])
        {
            water += (rightmax - height[i]);
        }
        else
        {
            rightmax = height[i];
        }
    }
    cout << water;
}