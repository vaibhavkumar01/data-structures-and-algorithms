// https://codeforces.com/contest/2276/problem/A
// Replace and Compress

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
        string s;
        cin >> s;

        bool canIncrease = false;
        bool canDecrease = false;

        for (int i = 1; i < (int)s.size() - 1; i++)
        {
            if (s[i - 1] == s[i + 1])
            {
                if (s[i] == s[i - 1])
                {
                    // Three equal consecutive characters.
                    canIncrease = true;
                }
                else
                {
                    // The middle character differs from its neighbours.
                    canDecrease = true;
                }
            }
        }

        int ans = 1 + canIncrease + canDecrease;
        cout << ans << '\n';
    }

    return 0;
}
