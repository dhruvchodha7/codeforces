#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    bool f=1;
    for(int i=1; i<=n; i++){
        if(i%2){
            for(int j=0; j<m; j++) cout<<'#';
        }
        else if(f){
            f=0;
            for(int j=0; j<m-1; j++) cout<<'.';
            cout<<'#';
        }
        else{
            f=1;
            cout<<'#';
            for(int j=0; j<m-1; j++){
                cout<<'.';
            }
        }
        cout<<endl;
    }
    
    return 0;
}