#include <bits/stdc++.h>
using namespace std;

int findMax(vector<int> &arr, int &ans, int i)
{
    if (i >= arr.size())
    {
        return ans;
    }
    int value = findMax(arr, ans, i + 1);
    ans = max(ans, value);
    value += arr[i];
    value = findMax(arr, ans, i + 1);
    ans = max(ans, value);
    return ans;
}

int main()
{
    vector<int> arr{1, 2, 3, 1};
    int ans = INT_MIN;
    int value = findMax(arr, ans, 0);
    cout << ans;
    return 0;
}