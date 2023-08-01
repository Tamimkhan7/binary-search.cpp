#include <bits/stdc++.h>
using namespace std;
int solve(int arr[], int n, int x)
{
    int l = 0, ans = -1;
    int r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == x)
        {
            ans = mid;
            break;
        }
        else if (arr[mid - 1] == x)
        {
            ans = mid - 1;
            break;
        }
        else if (arr[mid + 1] == x)
        {
            ans = mid + 1;
            break;
        }
        if (arr[mid] > x)
        {
            l = mid + 2;
        }
        else
        {
            r = mid - 2;
        }
    }
    return ans;
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