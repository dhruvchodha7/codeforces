#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i += 2)
        v.push_back(s[i] - 48);
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size() - 1; i++)
    {
        cout << v[i] << "+";
    }
    cout << v[v.size() - 1];

    return 0;
}