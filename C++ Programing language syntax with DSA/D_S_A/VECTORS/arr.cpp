#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
    vector<int> v = {-5, 2, 3, -1, 2, -1, 2, -1, 2, -1, 2, -1, 2, -1, 2};
    int ans = INT_MIN, n = v.size();
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {

            sum += v[j];
            ans = max(sum, ans);
        }
    }
    cout << ans;
}