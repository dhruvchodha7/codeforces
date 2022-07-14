#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, n;
    cin >> t;
    while (t--)
    {
        int sum = 0;
        int count = 0;
        cin >> a >> b >> n;
        while(sum<=n){
            if(a>b){
                b += a;
                sum = b;
                count++;
            }
            else{
                a += b;
                sum = a;
                count ++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}