#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        int m = a % b;
        if (m == 0)
            cout << 0 << endl;
        else
            cout << b - (a % b) << endl;
    }
    return 0;
}