#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << char(ch + j) << " ";
        }
        ch = 'A';
        for (int j = i - 1; j >= 0; j--)
        {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }
    return 0;
}