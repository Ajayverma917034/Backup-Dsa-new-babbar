#include <bits/stdc++.h>
using namespace std;

int Bst(int arr[][4], int row, int col, int target)
{
    int s = 0;
    int e = row * col - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        int rowind = mid / col;
        int colind = mid % col;
        int ele = arr[rowind][colind];
        if (ele == target)
            return mid;
        else if (arr[rowind][colind] < target)
        {
            s = mid + 1;
        }
        else
            e = mid - 1;

        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    cout << Bst(arr, 4, 4, 12);
    return 0;
}