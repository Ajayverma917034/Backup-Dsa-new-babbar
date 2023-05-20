#include <bits/stdc++.h>
using namespace std;

int findMissing(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == mid + 1)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return s + 1;
}
int main()
{
    vector<int> v{1, 2, 3, 4, 6, 7, 8, 9};
    cout << findMissing(v);
    return 0;
}