#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, count = 1, ans = 0;
    cin >> n;
    int a[n + 10];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
            count++;
        }
        else
        {
            ans = max(count, ans);
            count = 1;
        }
    }
    ans = max(count, ans);
    cout << ans << endl;
    return 0;
}