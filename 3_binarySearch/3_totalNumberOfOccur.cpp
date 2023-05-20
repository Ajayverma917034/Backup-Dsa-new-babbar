#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{2, 4, 4, 4, 4, 4, 6, 8, 10};
    auto start = lower_bound(v.begin(), v.end(), 2);
    auto end = upper_bound(v.begin(), v.end(), 2);
    cout << end - start;

    return 0;
}