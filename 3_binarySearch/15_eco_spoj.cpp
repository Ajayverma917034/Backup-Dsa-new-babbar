#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> arr, int m, int mid)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > mid)
        {
            sum += arr[i] - mid;
        }
    }
    if (sum >= m)
        return true;
    return false;
}

int cutting(vector<int> arr, int m)
{
    int maxi = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        maxi = max(maxi, arr[i]);
    }
    int e = maxi;
    int ans = -1;
    int s = 0;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(arr, m, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    vector<int> arr{20, 15, 10, 17};
    int m = 7;
    cout << cutting(arr, m);

    return 0;
}