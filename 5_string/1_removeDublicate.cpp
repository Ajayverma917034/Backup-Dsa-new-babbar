#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";
    size_t found = s.find(part);
    while (found != string::npos)
    {
        s.erase(found, part.size());
        found = s.find(part);
    }
    cout << s << endl;
}