#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &arr, int x)
{
    int s = 0;
    int e = arr.size() - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= x)
        {
            e = mid - 1;
            ans = mid;
        }
        else if (x > arr[mid])
            s = mid + 1;
        else
            e = mid - 1;
        cout << mid << " ";
    }
    return ans;
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    cout << lowerBound(arr, 3);

    return 0;
}
