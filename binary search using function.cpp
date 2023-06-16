#include <bits/stdc++.h>
using namespace std;
void bs(int arr[], int n, int x)
{
    int l = 0, r = n - 1;
    while (r >= l)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == x)
        {
            cout << "Find the value " << mid << endl;
            return;
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
    cout << "Not found " << x << endl;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);
    int x;
    cin >> x;
    bs(arr, n, x);
}
