#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    vector<pair<int, int>> v;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        v.push_back(make_pair(b, i+1));
    }
    sort(v.begin(), v.end());
    int days = 0;
    int cnt = 0;
    vector<int> res;
    // create a for loop and add each element to the days variable
    for (int i = 0; i < n; i++)
    {
        days += v[i].first;
        if (days <= k){
            cnt++;
            res.push_back(v[i].second);
        }else{
            break;
        }
    }
    cout<<cnt<<endl;
    //print vector res with spaces in between
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}