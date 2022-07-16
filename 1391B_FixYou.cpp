#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, c, count = 0;
        cin >> r >> c;
        char arr[r][c];
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                cin >> arr[i][j];

        for (int i = 0; i < c; i++)
            if (arr[r - 1][i] == 'D')
                count++;
        for (int i = 0; i < r; i++)
            if (arr[i][c - 1] == 'R')
                count++;
        cout << count << endl;
    }
}