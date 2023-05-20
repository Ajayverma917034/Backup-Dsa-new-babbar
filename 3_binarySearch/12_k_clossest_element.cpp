#include <bits/stdc++.h>
using namespace std;

vector<int> kClossest(vector<int> arr, int x, int k)
{
    int l = 0, h = arr.size() - 1;

    while (h - l >= k)
    {
        if (x - arr[l] > arr[h] - x)
            l++;
        else
            h--;
    }
    cout << l << " " << h << endl;
    return vector<int>(arr.begin() + l, arr.begin() + h + 1);
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    vector<int> ans = kClossest(arr, 3, 4);
    for (auto i : ans)
        cout << i << " ";

    return 0;
}