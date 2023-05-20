#include <bits/stdc++.h>
using namespace std;
bool isSorted(vector<int> &arr, int i, int &n)
{
    if (i == n - 1)
        return true;
    if (arr[i + 1] < arr[i])
        return false;

    return isSorted(arr, i + 1, n);
}

int main()
{
    vector<int> arr{1, 2, 3, 5, 6, 8};
    int i = 0;
    int n = arr.size();
    if (isSorted(arr, i, n))
    {
        cout << "Sorted ";
    }
    else
    {
        cout << "NOt Sorted";
    }
    return 0;
}