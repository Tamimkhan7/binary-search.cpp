#include <bits/stdc++.h>
using namespace std;
int solve(int arr[], int n, int x)
{
    int l = 0;
    int r = n - 1;
    int res = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == x)
        {
            res = x;
            break;
        }
        else if (arr[mid] > x)
        {
            res = arr[mid];
            r = mid - 1;
        }
        else
        {
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