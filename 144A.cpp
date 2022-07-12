#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int max = INT_MIN, min = INT_MAX, maxi = 0, mini = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        if (a > max)
        {
            maxi = i;
            max = a;
        }
        if (a <= min)
        {
            mini = i;
            min = a;
        }
    }
    if (maxi > mini)
    {
        cout << (maxi - 1) + (n - mini) - 1;
    }
    else
    {
        cout << (maxi - 1) + (n - mini);
    }
    return 0;
}