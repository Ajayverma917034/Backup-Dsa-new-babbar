#include <bits/stdc++.h>
using namespace std;

int findIndex(vector<int> arr, int target)
{
    int s = 0;
    int e = arr.size() - 1;

    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == target)
            return mid;
        if (mid - 1 >= 0 && arr[mid - 1] == target)
        {
            return mid - 1;
        }
        if (mid + 1 < arr.size() && arr[mid + 1] == target)
            return mid + 1;

        if (target > arr[mid])
            s = mid + 2;
        else
            e = mid - 2;
    }
    return -1;
}

int main()
{
    vector<int> v{10, 3, 40, 20, 50, 80, 70};
    int target = 40;

    int ans = findIndex(v, target);
    cout << ans << endl;

    return 0;
}