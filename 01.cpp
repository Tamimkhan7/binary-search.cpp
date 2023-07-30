#include <bits/stdc++.h>
using namespace std;
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
    int left = 0, right = n - 1;
    int k, mid;
    cin >> k;
    while (right >= left)
    {
        mid = (left + right) / 2;
        if (arr[mid] == k)
        {
            cout << mid << endl;
            return;
        }
        else if (arr[mid] > k)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    cout << -1 << endl;
}