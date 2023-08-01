#include <bits/stdc++.h>
using namespace std;
void check(int c, int d)
{
    if (c != 0)
        cout << "Ascending order in my given array" << endl;
    else
        cout << "Descending order in my given array" << endl;
}
void bs(int arr[], int n)
{
    int l = 0, r = n - 1;
    int c = 0, d = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            c++;
            break;
        }
        else
        {
            d++;
            break;
        }
    }
    check(c, d);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // int x;cin>>x;
    bs(arr, n);
}