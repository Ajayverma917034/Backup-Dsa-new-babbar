#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        cout << "*";
        for (int j = 0; j < (2 * i) - 1; j++)
        {
            cout << " ";
        }
        if (i != 0)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        cout << "*";
        for (int j = 0; j < (2 * i) - 1; j++)
        {
            cout << " ";
        }

        cout << "*";

        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        cout << " ";
    }
    cout << "*";
    return 0;
}