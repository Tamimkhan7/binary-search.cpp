#include <bits/stdc++.h>
using namespace std;
void solve(int arr[], int l, int n)
{
    int r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] > arr[mid + 1])
        {
            cout << mid + 1 << endl;
            break;
        }
        else if (arr[mid] < arr[mid - 1])
        {
            cout << mid << endl;
            break;
        }
        if (arr[mid] > arr[r])
            l = mid + 1;
        else
            r = mid - 1;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    solve(arr, 0, n);
}