#include <bits/stdc++.h>
using namespace std;
void printAllSub(vector<int> &arr, int start, int end)
{
    if (end == arr.size())
    {
        return;
    }
    for (int i = start; i <= end; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;
    printAllSub(arr, start, end + 1);
}

void printAllSub1(vector<int> &arr)
{

    for (int start = 0; start < arr.size(); start++)
    {
        int end = start;
        printAllSub(arr, start, end);
    }
}

int main()
{
    vector<int> arr{1, 2, 3, 4};
    printAllSub1(arr);
    return 0;
}