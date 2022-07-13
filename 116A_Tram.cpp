#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b;
    int cur=0, m=0;
    cin>>n;
    vector<int>v(n);
    while(n--){
        cin>>a>>b;
        cur -= a;
        cur += b;
        if(cur>m){
            m=cur;
        }
    }
    cout<<m;
    return 0;
}