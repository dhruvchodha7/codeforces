#include <bits/stdc++.h>
#define ll long long;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll k, x;
        cin >> k >> x;
        ll ans = 9 * (k - 1) + x;
        cout << ans << endl;
    }

    return 0;
}