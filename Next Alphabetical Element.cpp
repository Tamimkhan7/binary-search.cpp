#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, res;
    cin >> s;
    char ch;
    cin >> ch;
    int l = 0, n = s.size();
    int r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (s[mid] > ch)
        {
            res = s[mid];
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << res << endl;
}