#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> nums, int s, int target)
{
    int e = nums.size() - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
            e = mid - 1;
        else
            s = mid + 1;
    }
    return -1;
}

int findPair2(vector<int> nums, int k)
{
    set<pair<int, int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (binarySearch(nums, i + 1, nums[i] + k) != -1)
        {
            ans.insert({nums[i], nums[i] + k});
        }
    }
    return ans.size();
}

int findPair1(vector<int> nums, int k)
{
    sort(nums.begin(), nums.end());
    set<pair<int, int>> ans;
    int i = 0, j = 1;
    while (j <= nums.size())
    {
        if (nums[j] - nums[i] == k)
        {
            ans.insert({nums[i], nums[j]});
            i++,
                j++;
        }
        else if (nums[j] - nums[i] > k)
        {
            i++;
        }
        else
            j++;
        if (i == j)
            j++;
    }
    return ans.size();
}

int main()
{
    vector<int> arr{1, 1, 1, 1};
    int target = 0;
    cout << findPair1(arr, target) << endl;

    return 0;
}