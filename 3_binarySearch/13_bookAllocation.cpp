#include <bits/stdc++.h>
using namespace std;

bool possibleSolution(vector<int> arr, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] + pageSum <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int BookAllocate(vector<int> arr, int m)
{
    int s = 0;
    int sum = 0;
    for (auto i : arr)
        sum += i;
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (possibleSolution(arr, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
            s = mid + 1;
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    vector<int> arr{10, 20, 30, 40};
    int m = 2;
    cout << BookAllocate(arr, m);

    return 0;
}