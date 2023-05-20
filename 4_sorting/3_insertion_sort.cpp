#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int index = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > index)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = index;
    }
}
int main()
{
    vector<int> arr{10, 1, 7, 6};
    insertion_sort(arr);
    for (auto i : arr)
        cout << i << " ";

    return 0;
}