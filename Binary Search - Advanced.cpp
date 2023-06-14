#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int low = 0, high = n - 1;
    int k, mid;
    cin >> k;
    int c = 0;
    while (high >= low)
    {
        mid = (high + low) / 2;
        if (arr[mid] == k)
        {
            c++;
            high = mid - 1;
            if (arr[mid - 1] != k)
                cout << mid << " ";
            cout << mid + c << " ";
        }
        else if (arr[mid] > k)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (c != 0)
        cout << c + 1 << endl;
    else
        cout << -1 << endl;
}