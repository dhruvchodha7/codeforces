#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, steps;
    cin >> n >> m;
    if (m > n)
        steps=-1;
    else{
        if(n%2 == 0)
            steps=n/2;
        else
            steps= (n/2)+1;
        while(steps%m !=0 ){
            steps++;
        }
    }
    cout<<steps;
    return 0;
}