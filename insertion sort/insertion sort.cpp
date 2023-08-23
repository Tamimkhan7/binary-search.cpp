#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n)
{ // that is main logic
    for (int i = 1; i < n; i++)
    {
        int item = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > item)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = item;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    insertion_sort(arr, n);
}