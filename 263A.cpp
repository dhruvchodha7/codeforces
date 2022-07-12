#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, ans;
    vector<vector<int>> v (5, vector<int>(5));
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>v[i][j];
            if(v[i][j] == 1){
                x=i;
                y=j;
                break;
            }
        }
    }
    x = abs(x-2);
    y = abs(y-2);
    cout<<x+y;
    return 0;
}