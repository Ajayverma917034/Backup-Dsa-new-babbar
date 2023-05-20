#include <bits/stdc++.h>
using namespace std;

int expandAroundIndex(string s, int i, int j)
{
    int count = 0;
    while (i >= 0 && j < s.length() && s[i] == s[j])
    {
        count++;
        i--;
        j++;
    }
    return count;
}

int palindromic(string s)
{
    int totalCount = 0;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        int oddCount = expandAroundIndex(s, i, i);
        totalCount += oddCount;
        int evenCount = expandAroundIndex(s, i, i + 1);
        totalCount += evenCount;
    }
    return totalCount;
}

int main()
{
    string s = "noon";
    cout << palindromic(s);

    return 0;
}