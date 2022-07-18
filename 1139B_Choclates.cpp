#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    long long res = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        int m = min(arr[i + 1] - 1, arr[i]);
        if (m < 0)
            m = 0;
        arr[i] = m;
        res += m;
    }
    cout << res;

    return 0;
}