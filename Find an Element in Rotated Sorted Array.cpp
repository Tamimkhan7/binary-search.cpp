#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define nl '\n'
#define mod 1000000007
typedef long long int ll;
int countrot(int arr[], int l, int r)
{
    int res = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] > arr[mid + 1])
        {
            res = mid + 1;
            break;
        }
        else if (arr[mid] < arr[mid - 1])
        {
            res = mid;
            break;
        }
        if (arr[mid] > arr[r])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return res;
}
int binsearch(int arr[], int l, int r, int x)
{
    int res = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == x)
        {
            res = mid;
            r = mid - 1;
        }
        else if (arr[mid] < x)
        {
            l = mid + 1;
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
    faster;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int m = countrot(arr, 0, n - 1);
    int x;
    cin >> x;
    int res = binsearch(arr, 0, m - 1, x);
    int res2 = binsearch(arr, m, n - 1, x);
    cout << max(res, res2) << endl;
}