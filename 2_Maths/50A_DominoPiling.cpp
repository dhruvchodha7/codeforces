#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    if(n>m)
        swap(m,n);
    if(m%2 == 0){
        cout << (m/2)*n << endl;
    }
    else{
        cout << ((m/2)*n) + n/2<< endl;
    }
    return 0;
}