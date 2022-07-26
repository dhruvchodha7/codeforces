#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        int area;
        int x = a>b ? b : a;
        int y = a>b ? a : b;
        area = x*2;
        if(area<y){
            area = y;
        }
        area *= area;
        
        cout<<area<<endl;
    }
    return 0;
}