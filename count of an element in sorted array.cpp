#include <bits/stdc++.h>
using namespace std;
int FO(int arr[], int n, int k)
{
    int l = 0, r = n - 1;
    int mid, res = -1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (arr[mid] == k)
        {
            res = mid;
            r = mid - 1;
        }
        else if (arr[mid] > k)
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
int LO(int arr[], int n, int k)
{
    int l = 0, r = n - 1;
    int mid, res2 = -1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (arr[mid] == k)
        {
            res2 = mid;
            l = mid + 1;
        }
        else if (arr[mid] > k)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return res2;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int k;
    cin >> k;
    int a = FO(arr, n, k);
    int b = LO(arr, n, k);
    int ans = b - a + 1;
    cout << ans << endl;
}