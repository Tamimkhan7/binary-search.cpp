#include <bits/stdc++.h>
using namespace std;
int LO(int arr[], int n, int x) // LO-- last occurrence
{
    int l = 0, r = n - 1;
    int ans2 , mid;
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
    int ans , mid;
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
    int ans = res2 - s[i] == 'B' && s[i + 1] == 'G' res + 1;
    cout << ans << endl;
}