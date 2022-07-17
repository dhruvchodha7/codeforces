#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *a = new int[7];
    for (int i = 0; i < 7; i++)
        cin >> a[i];

    int idx = 0;
    while (n > 0)
    {
        n -= a[idx];
        idx = (++idx)%7;
    }
    cout << idx;

    return 0;
}