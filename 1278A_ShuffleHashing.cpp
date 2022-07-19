#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string p, h, x;
    while (t--)
    {
        cin >> p >> h;
        sort(p.begin(), p.end());
        int n = p.length();
        int m = h.length();
        bool f = 0;
        if (n > m)
        {
            f = 0;
        }
        else
        {
            for (int i = 0; i < m; i++)
            {
                x = h.substr(i, n);
                sort(x.begin(), x.end());
                if (x == p)
                {
                    f = 1;
                    break;
                }
            }
        }
        if (f)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}