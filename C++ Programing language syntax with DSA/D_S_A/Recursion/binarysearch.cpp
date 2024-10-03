#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int searchin(vector<int> &nums, int target, int s, int e)
{

    if (s > e)
        return -1;
    int mid = s + (e - s) / 2;
    if (nums[mid] == target)
        return mid;
    else if (nums[mid] < target)
    {
        s = mid + 1;
    }
    else
        e = mid - 1;
    searchin(nums, target, s, e);
}
int main()
{

    vector<int> nums = {1, 3, 4, 5, 6, 7, 8, 9};
   opw
}
