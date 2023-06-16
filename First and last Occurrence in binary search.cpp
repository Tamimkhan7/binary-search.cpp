#include <bits/stdc++.h>
using namespace std;
int LO(int arr[], int n, int x) // LO-- last occurrence
{
    int l = 0, r = n - 1;
    int ans2 = -1, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (arr[mid] == x)
        {
            ans2 = mid;
            l = mid + 1;
        }
        else if (arr[mid] > x)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans2;
}
int FO(int arr[], int n, int x) // FO--First Occurrence
{
    int l = 0, r = n - 1;
    int ans = -1, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (arr[mid] == x)
        {

            ans = mid;
            r = mid - 1;
        }
        else if (arr[mid] > x)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}
int count(int arr[], int n, int x)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            c++;
    }
    return c;
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
    int res = FO(arr, n, x);
    int res2 = LO(arr, n, x);
    int res3 = count(arr, n, x);
    cout << res << " " << res2 << " " << res3;
}