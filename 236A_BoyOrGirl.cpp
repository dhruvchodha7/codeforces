#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count, pass = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i + 1; j < s.length(); j++)
        {
            if (s[i] == s[j])
            {
                pass++;
                break;
            }
        }
    }
    count = s.length() - pass;
    if (count % 2)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
    return 0;
}