#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;

    bool f = 0;
    string res;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            f = 1;
            res += s[i];
            res += s[i + 1];
            break;
        }
    }
    if (f)
    {
        cout << "YES" << endl;
        cout << res << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}