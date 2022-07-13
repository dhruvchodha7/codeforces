#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b;
    int cur=0;
    cin>>n;
    vector<int>v(n);
    while(n--){
        cin>>a>>b;
        cur -= a;
        cur += b;
        v.push_back(cur);
    }
    cout<<*max_element(v.begin(), v.end());
    return 0;
}