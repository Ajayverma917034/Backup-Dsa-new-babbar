#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &arr, int &target, int sum, int mini)
{
    if (target == sum)
    {
        return 0;
    }
    if (sum > target)
    {
        return INT_MAX;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        int ans = solve(arr, target, sum + arr[i], mini);
        if (ans != INT_MAX)
        {
            mini = min(mini, ans + 1);
        }
    }
    return mini;
}

int main()
{
    vector<int> arr{1, 2, 3, 5};
    int target = 5;
    int mini = INT_MAX;
    int sum = 0;
    int ans = solve(arr, target, sum, mini);
    cout << ans;
    return 0;
    return 0;
}