#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int l = 0, r = n - 1;
    int x, c = 0;
    cin >> x;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == x)
        {
            c++;
            cout << mid+1 << endl;
            break;
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
    if (c == 0)
        cout << "Not found" << endl;
}