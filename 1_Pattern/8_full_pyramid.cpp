#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    // cin >> n;
    for (int i = n; i >= 0; i--)
    {

        int j = 0;
        while (j < i)
        {
            cout << " ";
            j++;
        }
        j = n - i + 1;
        while (j > 0)
        {
            cout << "* ";
            j--;
        }

        j = 0;
        while (j < i)
        {
            cout << " ";
            j++;
        }
        cout << endl;
    }
    return 0;
}