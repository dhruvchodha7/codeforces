#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
    {
        bool flag = 0;
        // left
        for (int j = i - 1; j >= i - x && j >= 0 && !flag; j--)
        {
            if (v[j] <= v[i])
                flag = 1;
        }
        if (flag)
            continue;

        // right
        for (int k = i + 1; k < n && k <= i + y && !flag; k++)
        {
            if (v[k] <= v[i])
                flag = 1;
        }
        if (!flag)
        {
            cout << i + 1;
            return 0;
        }
    }
    return 0;
}