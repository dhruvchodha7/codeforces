#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> x(4);
    int a, b, c;
    // take input in vector x
    for (int i = 0; i < 4; i++)
    {
        cin >> x[i];
    }
    // sort the vector x
    sort(x.begin(), x.end());
    int sum = x[3];
    a = sum - x[0];
    b = sum - x[1];
    c = sum - x[2];
    cout << a << " " << b << " " << c << endl;

    return 0;
}