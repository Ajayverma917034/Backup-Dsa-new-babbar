#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << 1;
        for (int j = 0; j < (2 * i) - 1; j++)
        {
            cout << " ";
        }
        if (i > 0)
            cout << i + 1 << " ";
        cout << endl;
    }
    for (int j = 0; j < 5; j++)
    {
        cout << j + 1 << " ";
    }

    return 0;
}