#include <bits/stdc++.h>
using namespace std;
int solve(int arr[], int n, int x)
{
    int l = 0, r = n - 1;
    int res = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == x)
        {
            r = mid - 1;
        }
        else if (arr[mid] > x)
        {
            r = mid - 1;
        }
        else
        {
            res = arr[mid];
            // cout << res << endl;
            l = mid + 1;
        }
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int x;
    cin >> x;
    int res = solve(arr, n, x);
    cout << res << endl;
}
