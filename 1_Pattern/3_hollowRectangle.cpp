#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the number of row and col" << endl;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cout << "* ";
    }
    cout << endl;
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (j == 0 || j == m - 1)
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
    for (int i = 0; i < m; i++)
    {
        cout << "* ";
    }
    return 0;
}