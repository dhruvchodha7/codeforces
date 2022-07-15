#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i + 1] <= v[i])
        {
            count = 0;
        }
        count++;
    }
    cout << count;

    return 0;
}