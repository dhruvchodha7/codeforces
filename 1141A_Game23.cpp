#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, count = 0;
    cin >> n >> m;
    if (m == n)
        cout << count;
    else if (m % n != 0)
        cout << -1;
    else
    {
        int d = m / n;
        while (d % 2 == 0)
        {
            d /= 2;
            count++;
        }
        while (d % 3 == 0)
        {
            d /= 3;
            count++;
        }
        if (d != 1)
            count = -1;
        cout << count;
    }

    return 0;
}