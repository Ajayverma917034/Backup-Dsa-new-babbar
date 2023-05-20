#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }
        int k = i + 1;
        int count = k;
        for (int j = 0; j < count; j++)
        {
            cout << k << " ";
            k = k + 1;
        }
        k = k -2;
        count = k;
        for (int j = 0; j < count - i; j++)
        {
            cout << k << " ";
            k = k - 1;
        }
        cout << endl;
    }
    return 0;
}