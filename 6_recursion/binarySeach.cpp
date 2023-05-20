#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int s, int e, int target)
{
    if (s > e)
        return -1;
    int mid = s + (e - s) / 2;
    if (arr[mid] == target)
        return mid;
    else if (arr[mid] > target)
        return binarySearch(arr, s, mid - 1, target);

    return binarySearch(arr, mid + 1, e, target);
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7};
    int target = 4;
    int mid = binarySearch(arr, 0, arr.size(), target);
    if (mid != -1)
        cout << arr[mid];
    return 0;
}