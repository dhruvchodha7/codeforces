#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin>>n;
        int odd = 0, even = 0;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(a[i] & 1) odd++;
            else even++;
        }
        if(odd == 0 || (even == 0 && n%2 == 0)) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    
    return 0;
}