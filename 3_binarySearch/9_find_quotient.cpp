#include <bits/stdc++.h>
using namespace std;
int findDivide(int divident, int divisor)
{
    int s = 0;
    int e = abs(divident);
    int mid = s + (e - s) / 2;
    int ans = 1;
    while (s <= e)
    {
        if (abs(mid * divisor) == abs(divident))
        {
            ans = mid;
            break;
        }
        if (abs(mid * divisor) > abs(divident))
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
        // cout << "hel";
    }
    if (divident < 0 && divisor < 0 || divident >= 0 && divisor >= 0)
    {
        return ans;
    }
    return -1 * ans;
}

int main()
{
    int dividend = -21;
    int divisior = 7;
    int quotient = findDivide(dividend, divisior);
    cout << quotient;
    return 0;
}