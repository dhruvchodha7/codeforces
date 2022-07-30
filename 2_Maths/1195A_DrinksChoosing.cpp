#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(k + 1);
    int cap = ceil(1.0 * n / 2);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[x]++;
    }
    int odd = 0, even = 0;
    for (int i = 0; i <= k; i++)
    {
        if (v[i] % 2)
        {
            odd++;
            even += (v[i] - 1);
        }
        else
            even += v[i];
    }
    int res = 0;
    res += 2 * min(even / 2, cap);
    cap -= min(even / 2, cap);
    res += cap;
    cout << res;

    return 0;
}