#include <bits/stdc++.h>
using namespace std;
string reorganizeString(string s)
{
    int i = 0, j = 0;
    string b = s;
    string ans = "";
    ans.push_back(b[0]);
    b.erase(0, 1);
    while (i < b.length())
    {
        cout << "String B  " << b << " ";
        cout << "String ans   " << ans << " " << i << " " << j << endl;
        if (ans.back() != b[i] && i == j)
        {
            ans.push_back(b[i]);

            b.erase(i, 1);
            i = j = 0;
        }
        else if (ans.back() != b[i] && i != j)
        {
            ans.push_back(b[i]);
            b.erase(i, 1);
            i = j;
        }
        else if (ans.back() == b[i])
        {
            i++;
        }
        cout << endl
             << "After" << endl;
        cout << "String B  " << b << " ";
        cout << "String ans   " << ans << " " << i << " " << j << endl
             << endl;
    }
    if (ans.length() < s.length())
        return "";
    return ans;
}

int main()
{
    string s = "baaba";
    string ans = reorganizeString(s);

    return 0;
}