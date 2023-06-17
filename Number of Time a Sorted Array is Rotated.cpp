#include <bits/stdc++.h>
using namespace std;
int solve(int arr[], int l, int r)
{
    int ans = 0, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (mid < r && arr[mid + 1] < arr[mid])
        {
            ans = mid + 1;
            break;
        }
        else if (mid > l && arr[mid] < arr[mid - 1])
        {
            ans = mid;
            break;
        }
        if (arr[r] > arr[mid])
            r = mid - 1;
        else
            l = mid + 1;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << solve(arr, 0, n - 1) << endl;
}
// bujte hobe