#include <bits/stdc++.h>
using namespace std;

void findsAns(string &s1, int p1, string &s2, int p2, int carry, string &ans)
{
    if (p1 < 0 && p2 < 0)
    {
        if (carry == 0)
        {
            return;
        }
        else
        {
            ans.push_back(carry + '0');
            return;
        }
    }

    int n1 = (p1 >= 0 ? s1[p1] : '0') - '0';
    int n2 = (p2 >= 0 ? s2[p2] : '0') - '0';
    int csum = n1 + n2 + carry;
    int digit = csum % 10;
    carry = csum / 10;
    ans.push_back(digit + '0');

    findsAns(s1, p1 - 1, s2, p2 - 1, carry, ans);
    return;
}

string findSum(string &s1, string &s2)
{
    int p1 = s1.size() - 1;
    int p2 = s2.size() - 1;
    int carry = 0;
    string ans;
    findsAns(s1, p1, s2, p2, carry, ans);
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    string s1 = "1234", s2 = "1234";
    string ans = findSum(s1, s2);
    cout << ans;
    return 0;
}