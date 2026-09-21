#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        if (s[0] == '1')
        {
            cout << count(s.begin(), s.end(), '0') << endl;
            continue;
        }

        int totalZeros = count(s.begin(), s.end(), '0');
        int onesLeft = 0;
        int zerosRight = totalZeros;

        int ans = totalZeros;

        for (int i = 0; i <= n; i++)
        {
            // At boundary i, s[0..i-1] should be 0
            // and s[i..n-1] should be 1.
            ans = min(ans, onesLeft + zerosRight);

            if (i < n)
            {
                if (s[i] == '1')
                    onesLeft++;
                else
                    zerosRight--;
            }
        }

        cout << ans << endl;
    }

    return 0;
}