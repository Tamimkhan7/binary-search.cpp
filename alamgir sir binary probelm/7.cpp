#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int ans = -1;
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;

        if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid]))

            ans = arr[mid];
        else if (mid > 0 && arr[mid - 1] > arr[mid])

            r = mid - 1;

        else

            l = mid + 1;
    }

    cout << ans << endl;
}