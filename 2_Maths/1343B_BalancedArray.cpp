#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if ((n/2) % 2)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        int even = 2;
        for(int i=1; i<n/2; i++){
            cout<<odd<<"\n";
            even += 2;
        }
        even -= 2;
        int odd = 1;
        for(int i=1; i<n/2; i++){
            cout<<odd<<"\n";
            odd += 2;
        }
        cout<<even+n/2-1<<"\n";
        
    }

    return 0;
}