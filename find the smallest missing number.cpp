#include <bits/stdc++.h>
using namespace std;
int fo(int arr[], int l, int n)
{
    int res = -1;
    int r, i;
    r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        int p = arr[mid + 1];
        int q = arr[mid];
        if (p - q > 1)
        {
            res = q + 1;
            l = mid + 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return res;
}
int lo(int arr[], int l, int n)
{
    int res = -1;
    int r, i;
    r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        int k = arr[mid - 1];
        int q = arr[mid];
        if (q - k > 1)
        {
            res = q + 1;
            r = mid - 1;
        }
        else
        {
            r = mid - 1;
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
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int res = lo(arr, 0, n);
    int res2 = fo(arr, 0, n);
    if (res < res2)
        cout << res << endl;
    else
        cout << res2 << endl;
}
// hoy na second time i will try