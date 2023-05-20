#include <bits/stdc++.h>
using namespace std;

int findPivote(vector<int> arr)
{
    int s = 0, e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (s == e)
            return s;
        if (mid <= e && arr[mid] > arr[mid + 1])
        {
            return mid + 1;
        }
        if (mid - 1 >= s && arr[mid] < arr[mid - 1])
        {
            return mid;
        }
        if (arr[mid] < arr[s])
            e = mid - 1;
        else
            s = mid + 1;
        mid = s + (e - s) / 2;
        // cout << "hello";
    }
    return -1;
}

int main()
{
    vector<int> arr{0, 1, 2};
    int pivote = findPivote(arr);
    cout << arr[pivote] << endl;
    return 0;
}