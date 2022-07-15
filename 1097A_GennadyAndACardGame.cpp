#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, a;
    bool f = false;
    cin >> s;
    for (int i = 0; i < 5; i++)
    {
        cin >> a;
        if (a[0] == s[0] || a[1] == s[1])
            f = 1;
    }
    if (f)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}