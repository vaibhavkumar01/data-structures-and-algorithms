// https://codeforces.com/contest/2261/problem/A
// A. Hey, It's Me, Souvlakity

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int count = 0;
        int first = -1, last = -1;

        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                count++;

                if(first == -1)
                    first = i;

                last = i;
            }
        }
        if(count == 1)
            cout << 0 << '\n';
        else if(count == 2)
            cout << 1 << '\n';
        else
            cout << last - first << '\n';
    }
    return 0;
}