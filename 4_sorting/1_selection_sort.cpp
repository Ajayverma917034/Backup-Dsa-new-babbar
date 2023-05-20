#include <bits/stdc++.h>
using namespace std;
void selectionSort(vector<int> &arr)
{
    int index = 0;
    int i = 0;
    for (int j = 0; j < arr.size() - 1; j++)
    {
        index = j;
        i = j;
        while (i < arr.size())
        {
            if (arr[i] < arr[index])
                index = i;
            i++;
        }
        swap(arr[index], arr[j]);
    }
}

int main()
{

    vector<int> arr{3, 2, 1, 5, 6, 8, 8};
    selectionSort(arr);
    for (auto i : arr)
    {
        cout << i << " ";
    }

    return 0;
}