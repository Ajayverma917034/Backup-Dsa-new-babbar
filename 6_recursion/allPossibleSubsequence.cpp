#include <bits/stdc++.h>
using namespace std;

void findByRec(string &s, string temp, vector<string> &ans, int i)
{
    if (i >= s.size())
    {
        ans.push_back(temp);
        return;
    }

    findByRec(s, temp, ans, i + 1);
    temp.push_back(s[i]);
    findByRec(s, temp, ans, i + 1);
}

vector<string> subSequence(string &s)
{
    vector<string> ans;
    string temp = "";
    int i = 0;
    findByRec(s, temp, ans, i);
    return ans;
}

int main()
{
    string s = "abc";
    vector<string> ans;
    ans = subSequence(s);
    for (auto s : ans)
        cout << s << " ";
    cout << ans.size();
    return 0;
}