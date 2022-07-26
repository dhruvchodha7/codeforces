#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x, y, n, t;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> n;
        long long d = n/x;
        long long ans = x*d+y;
        if(ans>n){
            ans -= x;
        }
        cout<<ans<<endl;
    }

    return 0;
}