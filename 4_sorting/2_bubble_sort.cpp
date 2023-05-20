#include <bits/stdc++.h>
using namespace std;
void display(vector<int> arr)
{
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
}
void bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    cout << n;
    for (int i = 0; i < n - 1; i++)

    {
        display(arr);
        bool flag = true;
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << j << endl;
            if (arr[j] > arr[j + 1])
            {
                swap(arr[i], arr[j]);
                flag = false;
            }
        }
        if (flag == true)
            break;
    }
}

int main()
{
    vector<int> arr{1, 10, 1, 7, 6};
    bubbleSort(arr);
    for (auto i : arr)
        cout << i << " ";
    return 0;
}