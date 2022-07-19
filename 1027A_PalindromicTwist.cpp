#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s, int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        int d = (abs(s[i] - s[j]));
        if (!(d == 0 || d == 2))
            return false;
        i++;
        j--;
    }
    return true;
}
int main()
{
    int t, n;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        if (isPalindrome(s, n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}