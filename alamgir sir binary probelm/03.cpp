#include <bits/stdc++.h>
using namespace std;
int LO(int arr[], int n, int x)
{
    int l = 0, r = n - 1;
    int res = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == x)
        {
            res = mid;
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
    return res;
}
int FO(int arr[], int n, int x)
{
    int l = 0, r = n - 1;
    int res = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == x)
        {
            res = mid;
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
    int res = FO(arr, n, x);
    cout << res << endl;
    int res2 = LO(arr, n, x);
    cout << res2 << endl;
}