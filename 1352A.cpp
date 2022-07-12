#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans=0;
        vector<int> arr;
        int i = 0, j = 0;
        while(n>0){
            arr.push_back(n%10);
            n /= 10;
        }
        int len = arr.size();
        for(int k=0; k<len; k++){
            if(arr[k] == 0) continue;
            ans++;
        }
        reverse(arr.begin(), arr.end());
        cout<<ans<<endl;
        for(int k=0; k<len-1; k++){
            if(arr[k] == 0) continue;
            cout<<arr[k]*pow(10, len-k-1)<<' ';
        }
        if(arr[len-1]!=0)
            cout<<arr[len-1];
        cout<<endl;
    }

    return 0;
}