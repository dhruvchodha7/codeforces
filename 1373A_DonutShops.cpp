#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t, a, b, c;
    cin >> t;
    while (t--)
    {
        long long f = -1, s = -1;
        cin >> a >> b >> c;

        if (a < c)
            f = 1;

        if (a * b > c)
            s = b;
        cout << f << " " << s << endl;
    }

    return 0;
}