#include <bits/stdc++.h>
using namespace std;
int peakElement(vector<int> arr)
{
    int s = 0, e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
            e = mid;
        mid = s + (e - s) / 2;
        // cout << "hello";
    }
    return s;
}
int main()
{
    vector<int> v{0, 10, 111, 2};
    cout << peakElement(v);
    return 0;
}