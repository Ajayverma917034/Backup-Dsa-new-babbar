#include <bits/stdc++.h>
using namespace std;

int sqrtBy(int n)
{
    int s = 0, e = n;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (mid * mid == n)
        {
            return mid;
        }
        if (mid * mid > n)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int n = 10;
    int ans = sqrtBy(n);
    int precision = 2;

    double finalAns = ans;
    double steps = 0.1;
    for (int i = 0; i < precision; i++)
    {
        for (double j = finalAns; j * j <= n; j += steps)
        {
            finalAns = j;
        }
        steps = steps / 10;
    }
    cout << finalAns;
    return 0;
}