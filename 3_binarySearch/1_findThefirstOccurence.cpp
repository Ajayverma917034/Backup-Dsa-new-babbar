#include <bits/stdc++.h>
using namespace std;

int firstOcc(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
            end = mid - 1;
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    vector<int> v{1, 3, 5, 5, 5, 5, 6};
    cout << firstOcc(v, 6);
    return 0;
}