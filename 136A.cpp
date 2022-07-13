#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int t;
    cin>>n;
    vector<int> v(n);
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        v[t] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << v[i] << ' ';
    }
    return 0;
}