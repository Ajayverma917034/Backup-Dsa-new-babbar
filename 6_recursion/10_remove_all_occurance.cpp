#include <bits/stdc++.h>
using namespace std;
void removeAllOccur(string &s, string &part)
{
    int found = s.find(part);
    if (found == string::npos)
    {
        return;
    }
    s.erase(found, part.length());
    removeAllOccur(s, part);
    return;
}

int main()
{
    string s = "ababab";
    string part = "ab";
    removeAllOccur(s, part);
    cout << s;
    return 0;
}