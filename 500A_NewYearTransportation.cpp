#include <bits/stdc++.h>
using namespace std;
int main()
{   int n, t;
    cin >> n >> t;
    vector<int> v(n-1);
    for (int i = 0; i < n-1; i++)
        cin>>v[i];
    int idx = 0;
    while (idx<t-1)
    {
        idx += v[idx];

        if(idx == t-1){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}