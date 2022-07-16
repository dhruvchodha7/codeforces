#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    int skip = 1;
    int i = 0;
    while (i < n)
    {
        cout << s[i];
        i += (skip++);
    }

    return 0;
}