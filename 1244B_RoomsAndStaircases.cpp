#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    string s;
    cin >> t;
    while (t--)
    {
        int left = 0, right = 0, ans = 0;

        bool f = 0;
        cin >> n >> s;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            a[i] = s[i] - '0';
        }
        if (a[0] == 1 || a[n - 1] == 1)
        {
            cout << n * 2 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] == 1)
                {
                    left = i;
                    f = 1;
                    break;
                }
            }
            for (int i = n-1; i>=0; i--)
            {
                if(a[i] == 1){
                    right = n-i-1;
                    f = 1;
                    break;
                }
            }
            ans = 2 * (n-min(left, right));
            if(!f){
                cout<<n<<endl;
            }else{
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}