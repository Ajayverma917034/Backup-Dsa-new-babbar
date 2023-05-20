#include <bits/stdc++.h>
using namespace std;

void findLast(string &s, int i, int &ans, int x)
{
    if (i >= s.size())
    {
        return;
    }
    if (s[i] == x)
    {
        ans = i;
    }
    findLast(s, i + 1, ans, x);
}

int main()
{
    string s = "abbbcsa";
    int ans = -1;
    findLast(s, 0, ans, 'a');
    cout << ans;
    return 0;
}