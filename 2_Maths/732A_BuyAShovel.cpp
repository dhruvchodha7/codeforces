#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, r, h=1, i=0;
    cin >> k >> r;
    while (1)
    {
        i++;
        h = k * i;
        if(h%10 == 0 || h%10 == r)
            break;
    }
    cout<<i<<endl;
    
    return 0;
}