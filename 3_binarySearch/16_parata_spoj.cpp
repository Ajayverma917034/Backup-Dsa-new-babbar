#include <bits/stdc++.h>
using namespace std;

bool possibleSolution(vector<int> arr, int mid, int np)
{
    int currNp = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int timetaken = 0, j = 1;
        while (true)
        {
            if (timetaken + arr[i] * j <= mid)
            {
                currNp++;
                timetaken += arr[i] * j;
                j++;
            }
            else
            {
                break;
            }
        }
        if (currNp >= np)
            return true;
    }
    return false;
}

int minTime(vector<int> arr, int parata)
{
    int maxRankCook = *max_element(arr.begin(), arr.end());
    int maxTime = maxRankCook * (parata * (parata + 1) / 2);
    // cout << maxTime;
    int s = 0;
    int e = maxTime;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (possibleSolution(arr, mid, parata))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    vector<int> arr{1, 2, 3, 4};
    int prata = 10;
    cout << minTime(arr, prata);

    return 0;
}