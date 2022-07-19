#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h1, m1, h2, m2, h3, m3;
    char c;
    cin >> h1 >> c >> m1;
    cin >> h2 >> c >> m2;
    int min1 = h1 * 60 + m1;
    int min2 = h2 * 60 + m2;
    int mid = (min1 + min2) / 2;
    int h = mid / 60;
    int m = mid % 60;
    if (h > 9 && m > 9)
    {
        cout << h << ":" << m << endl;
    }
    else if (h > 9 && m < 10)
    {
        cout << h << ":"
             << "0" << m << endl;
    }
    else if (h < 10 && m > 9)
    {
        cout << "0" << h << ":" << m << endl;
    }
    else
    {
        cout << "0" << h << ":"
             << "0" << m << endl;
    }
    return 0;
}